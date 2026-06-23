#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/EulerRotationChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1ABCBD50)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1ABCBDC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_FETCH_ANGLESPEED_OFFSET UNITYSDK_OFFSET(0x1ABCBF20)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1ABCC080)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ABCC110)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1ABCC030)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1ABCC6C0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1ABCC0D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABCC730)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCC6D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotateEulerByFixedSpeed_TypeDefinitionIndex = 37966;

	class RotateEulerByFixedSpeed : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_angleSpeed()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotateEulerByFixedSpeed_TypeDefinitionIndex)->GetStaticField(0x8B10);
		}
		::UnityEngine::Vector3 angleSpeed; // 0x18
		::PipelineCamera::EulerRotationChannel channel; // 0x24
		::System::Boolean makeContextDependent; // 0x28
		::System::Single playRate; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_angleSpeed(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_FETCH_ANGLESPEED_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_ISLOOP_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEEULERBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
