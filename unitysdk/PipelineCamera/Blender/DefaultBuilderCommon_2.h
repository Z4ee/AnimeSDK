#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraTimestamp; }
namespace System { class String; }

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int DefaultBuilderCommon_2_TypeDefinitionIndex = 37988;

	template <typename TReserveKey, typename TPriority>
	struct DefaultBuilderCommon_2
	{
		::System::String* DebugName; // 0x0
		::PipelineCamera::WorldBasicCameraDataDeltaFlag DeltaFlag; // 0x0
		::System::Single Duration; // 0x0
		::PipelineCamera::ICameraTimestamp* Timestamp; // 0x0
		::System::Nullable_1<TReserveKey> ReverseKey; // 0x0
		TPriority Priority; // 0x0
	};
}
