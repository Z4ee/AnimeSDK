#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Blender/DefaultBuilderCommon_2.h"
#include "unitysdk/PipelineCamera/CameraDataBlenderBuilder_1.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera::Blender { template <typename T1, typename T2> class AnimationCurveBlenderBuilder_2; }
namespace UnityEngine { class AnimationCurve; }

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int AnimationCurveBlenderBuilder_2_TypeDefinitionIndex = 36383;

	template <typename TReverseKey, typename TPriority>
	class AnimationCurveBlenderBuilder_2 : public ::PipelineCamera::CameraDataBlenderBuilder_1<TPriority>
	{
	public:
		::PipelineCamera::Blender::DefaultBuilderCommon_2<TReverseKey, TPriority> _common; // 0x0
		::UnityEngine::AnimationCurve* _curve; // 0x0
	};
}
