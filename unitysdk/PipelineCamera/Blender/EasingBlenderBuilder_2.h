#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Blender/DefaultBuilderCommon_2.h"
#include "unitysdk/PipelineCamera/CameraDataBlenderBuilder_1.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/System/Nullable_1.h"

namespace PipelineCamera { class ICameraDataBlender; }

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int EasingBlenderBuilder_2_TypeDefinitionIndex = 36381;

	template <typename TReserveKey, typename TPriority>
	class EasingBlenderBuilder_2 : public ::PipelineCamera::CameraDataBlenderBuilder_1<TPriority>
	{
	public:
		::PipelineCamera::Blender::DefaultBuilderCommon_2<TReserveKey, TPriority> Common; // 0x0
		::PipelineCamera::EasingFunc EasingType; // 0x0
		::System::Nullable_1<::System::Single> MetaParam; // 0x0
	};
}
