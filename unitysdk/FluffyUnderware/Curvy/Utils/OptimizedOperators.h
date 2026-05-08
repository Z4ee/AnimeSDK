#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BC18B80)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BC1B020)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1BC142F0)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1BC1AFF0)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1BC1B060)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_3_OFFSET UNITYSDK_OFFSET(0x1BC1B080)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_4_OFFSET UNITYSDK_OFFSET(0x1BC1B0A0)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BC1AFC0)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BC18AC0)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BC16F70)
#define FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BC1AF90)

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int OptimizedOperators_TypeDefinitionIndex = 37254;

	class OptimizedOperators : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 UnaryNegation(::UnityEngine::Vector3 a)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_UNARYNEGATION_OFFSET))(a);
		}

		static ::UnityEngine::Vector3 Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_OFFSET))(a, d);
		}

		static ::UnityEngine::Vector3 Multiply_1(::System::Single d, ::UnityEngine::Vector3 a)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::UnityEngine::Vector3 Division(::UnityEngine::Vector3 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_DIVISION_OFFSET))(a, d);
		}

		static ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_NORMALIZE_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Color Multiply_2(::UnityEngine::Color a, ::System::Single b)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_2_OFFSET))(a, b);
		}

		static ::UnityEngine::Color Multiply_3(::System::Single b, ::UnityEngine::Color a)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_3_OFFSET))(b, a);
		}

		static ::UnityEngine::Quaternion Multiply_4(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_OPTIMIZEDOPERATORS_MULTIPLY_4_OFFSET))(lhs, rhs);
		}
	};
}
