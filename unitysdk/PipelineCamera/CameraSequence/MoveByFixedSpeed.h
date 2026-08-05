#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraLocationMotionChannel.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1DCCC2A0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DCCC310)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_FETCH_SPEED_OFFSET UNITYSDK_OFFSET(0x1DCCC470)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1DCCC5D0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DCCC660)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1DCCC580)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DCCC9B0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1DCCC620)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCCCA20)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCC9C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int MoveByFixedSpeed_TypeDefinitionIndex = 38625;

	class MoveByFixedSpeed : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_speed()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveByFixedSpeed_TypeDefinitionIndex)->GetStaticField(0x8C10);
		}
		::UnityEngine::Vector3 speed; // 0x18
		::PipelineCamera::CameraLocationMotionChannel channel; // 0x24
		::System::Single playRate; // 0x28
		::System::Boolean makeContextDependent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_speed(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_FETCH_SPEED_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_ISLOOP_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
