#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class PositionDampingPolicy; }

#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1D564440)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D5644B0)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_FETCH_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1D564610)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1D564770)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D564810)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1D564720)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D564800)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1D5647C0)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D564F30)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D564ED0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int PositionDampingSequence_TypeDefinitionIndex = 37972;

	class PositionDampingSequence : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_Current()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(PositionDampingSequence_TypeDefinitionIndex)->GetStaticField(0x8AA0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(PositionDampingSequence_TypeDefinitionIndex)->GetStaticField(0x8AA8);
		}
		::System::Boolean dampingInCameraSpace; // 0x18
		::System::Single playLength; // 0x1C
		::System::Boolean makeContextDependent; // 0x20
		::PipelineCamera::CameraSequence::PositionDampingPolicy* dampingPolicy; // 0x28
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData fetch_LastCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_FETCH_LASTCAMERADATA_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}
	};
}
