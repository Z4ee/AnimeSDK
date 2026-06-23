#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/RotateMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int QuaternionOptions_TypeDefinitionIndex = 27956;

	struct alignas(4) QuaternionOptions
	{
		::DG::Tweening::RotateMode rotateMode; // 0x10
		::DG::Tweening::AxisConstraint axisConstraint; // 0x14
		::UnityEngine::Vector3 up; // 0x18
	};
}
