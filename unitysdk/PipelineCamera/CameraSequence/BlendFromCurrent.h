#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1AE03F70)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1AE03FE0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_FETCH_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1AE04140)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1AE042A0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE04330)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1AE04250)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1AE046F0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1AE042F0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE047B0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE04700)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int BlendFromCurrent_TypeDefinitionIndex = 36354;

	class BlendFromCurrent : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::PipelineCamera::CameraSequence::BlendFromCurrent*, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData>** StaticGet_BuildDeltaData()
		{
			return (::System::Func_5<::PipelineCamera::CameraSequence::BlendFromCurrent*, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData>**)Il2CppClass::FromTypeDefinitionIndex(BlendFromCurrent_TypeDefinitionIndex)->GetStaticField(0x27080);
		}
		static ::Foundation::Unreal::FName* StaticGet_DeltaDataId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(BlendFromCurrent_TypeDefinitionIndex)->GetStaticField(0x8670);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(BlendFromCurrent_TypeDefinitionIndex)->GetStaticField(0x8678);
		}
		::UnityEngine::AnimationCurve* blendCurve; // 0x18
		::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag; // 0x20
		::System::Single playLength; // 0x24
		::System::Single playRate; // 0x28
		::System::Boolean isLooping; // 0x2C
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData fetch_LastCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_FETCH_LASTCAMERADATA_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_ISLOOP_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single time, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GETSEQUENCEDATAINTERNAL_OFFSET))(this, time, data, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
