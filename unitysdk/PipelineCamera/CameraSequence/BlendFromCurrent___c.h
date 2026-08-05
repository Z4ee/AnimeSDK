#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class BlendFromCurrent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCCABE0)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCAC20)
#define PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C___CCTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x1DCCAC30)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int BlendFromCurrent___c_TypeDefinitionIndex = 38624;

	class BlendFromCurrent___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::BlendFromCurrent___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::BlendFromCurrent___c**)Il2CppClass::FromTypeDefinitionIndex(BlendFromCurrent___c_TypeDefinitionIndex)->GetStaticField(0x2A5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraDeltaData __cctor_b__19_0(::PipelineCamera::CameraSequence::BlendFromCurrent* self, ::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::WorldBasicCameraData data, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraDeltaData(*)(::PVOID, ::PipelineCamera::CameraSequence::BlendFromCurrent*, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_BLENDFROMCURRENT___C___CCTOR_B__19_0_OFFSET))(this, self, context, data, deltaFlag);
		}
	};
}
