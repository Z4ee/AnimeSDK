#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/PositionDampingAxis.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int PivotLocationDamperConfig_TypeDefinitionIndex = 38025;

	struct alignas(8) PivotLocationDamperConfig
	{
		::System::Int32 Priority; // 0x10
		::System::String* DebugName; // 0x18
		::PipelineCamera::PositionDampingAxis Axis; // 0x20
		::System::Boolean ExternalUpdate; // 0x24
	};
}
