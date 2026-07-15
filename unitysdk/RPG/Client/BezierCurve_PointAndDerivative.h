#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BezierCurve_PointAndDerivative_TypeDefinitionIndex = 34532;

	struct alignas(4) BezierCurve_PointAndDerivative
	{
		::UnityEngine::Vector3 Point; // 0x10
		::UnityEngine::Vector3 Derivative; // 0x1C
	};
}
