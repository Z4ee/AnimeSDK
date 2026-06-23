#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int VectorOptions_TypeDefinitionIndex = 27964;

	struct alignas(4) VectorOptions
	{
		::DG::Tweening::AxisConstraint axisConstraint; // 0x10
		::System::Boolean snapping; // 0x14
	};
}
