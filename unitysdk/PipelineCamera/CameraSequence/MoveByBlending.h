#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraLocationMotionChannel.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceAlphaSampler; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class MoveByBlending_MoveTargetDataProvider; }

#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1B8A4CB0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B8A4790)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1B8A46F0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B8A48F0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1B8A46A0)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B8A4780)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1B8A4740)
#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4D20)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int MoveByBlending_TypeDefinitionIndex = 36368;

	class MoveByBlending : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		::PipelineCamera::CameraLocationMotionChannel channel; // 0x18
		::PipelineCamera::CameraSequence::MoveByBlending_MoveTargetDataProvider* dataProvider; // 0x20
		::System::Single playLength; // 0x28
		::System::Single playRate; // 0x2C
		::System::Boolean multipleAlpha; // 0x30
		::PipelineCamera::CameraSequence::CameraSequenceAlphaSampler* RightSampler; // 0x38
		::PipelineCamera::CameraSequence::CameraSequenceAlphaSampler* UpSampler; // 0x40
		::PipelineCamera::CameraSequence::CameraSequenceAlphaSampler* ForwardSampler; // 0x48
		::System::Boolean makeContextDependent; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING__CTOR_OFFSET))(this);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}
	};
}
