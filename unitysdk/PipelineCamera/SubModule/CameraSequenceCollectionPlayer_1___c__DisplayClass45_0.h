#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace UnityEngine { class AnimationCurve; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraSequenceCollectionPlayer_1___c__DisplayClass45_0_TypeDefinitionIndex = 38031;

	template <typename T>
	class CameraSequenceCollectionPlayer_1___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::PipelineCamera::WorldBasicCameraDataDeltaFlag flag; // 0x0
		::System::Single duration; // 0x0
		::UnityEngine::AnimationCurve* curve; // 0x0
	};
}
