#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int Vector3ArrayOptions_TypeDefinitionIndex = 27958;

	struct alignas(8) Vector3ArrayOptions
	{
		::DG::Tweening::AxisConstraint axisConstraint; // 0x10
		::System::Boolean snapping; // 0x14
		::Il2CppArray<::System::Single>* durations; // 0x18
	};
}
