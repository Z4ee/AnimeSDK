#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1C113E40)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1C113D40)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1C113CA0)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C113DB0)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1C113C50)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1C113D30)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1C113CF0)
#define PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C113E80)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int IdentitySequence_TypeDefinitionIndex = 38646;

	class IdentitySequence : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_IDENTITYSEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}
	};
}
