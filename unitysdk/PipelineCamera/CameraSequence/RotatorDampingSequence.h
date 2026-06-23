#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class RotatorDampingPolicy; }

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1DAC8B50)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DAC8BC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_FETCH_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1DAC8D20)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1DAC8E80)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DAC8F20)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1DAC8E30)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DAC8F10)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1DAC8ED0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9D00)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9CA0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotatorDampingSequence_TypeDefinitionIndex = 37973;

	class RotatorDampingSequence : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_Current()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingSequence_TypeDefinitionIndex)->GetStaticField(0x8B90);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingSequence_TypeDefinitionIndex)->GetStaticField(0x8B98);
		}
		::System::Single playLength; // 0x18
		::System::Boolean makeContextDependent; // 0x1C
		::PipelineCamera::CameraSequence::RotatorDampingPolicy* dampingPolicy; // 0x20
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData fetch_LastCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_FETCH_LASTCAMERADATA_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}
	};
}
