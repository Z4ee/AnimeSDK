#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostRewindInstance_CurvePoint_TypeDefinitionIndex = 57569;

	struct alignas(4) QteCatchGhostRewindInstance_CurvePoint
	{
		::UnityEngine::Vector3 Position; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum ControlType; // 0x1C
		::UnityEngine::Vector3 ControlFirst; // 0x20
		::UnityEngine::Vector3 ControlSecond; // 0x2C
		::System::Single Distance; // 0x38
	};
}
