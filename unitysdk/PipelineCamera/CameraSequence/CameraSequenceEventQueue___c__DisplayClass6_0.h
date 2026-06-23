#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__DISPLAYCLASS6_0__CONSUMEACTIVESTATES_B__0_OFFSET UNITYSDK_OFFSET(0x1D8322D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8322C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventQueue___c__DisplayClass6_0_TypeDefinitionIndex = 37839;

	class CameraSequenceEventQueue___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* activeStates; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance; // 0x18
		::PipelineCamera::CameraSequence::CameraSequenceContext* context; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ConsumeActiveStates_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__DISPLAYCLASS6_0__CONSUMEACTIVESTATES_B__0_OFFSET))(this);
		}
	};
}
