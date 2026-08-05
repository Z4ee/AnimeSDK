#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EF79130)
#define FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_2_OFFSET UNITYSDK_OFFSET(0x1EF791C0)
#define FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_3_OFFSET UNITYSDK_OFFSET(0x1EF79290)
#define FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_4_OFFSET UNITYSDK_OFFSET(0x1EF79320)
#define FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_OFFSET UNITYSDK_OFFSET(0x1EF79070)

namespace Foundation
{
	inline static constexpr unsigned int AlmostEqualX_TypeDefinitionIndex = 8293;

	class AlmostEqualX : public ::System::Object
	{
	public:
		static ::System::Boolean AlmostEquals(::UnityEngine::Vector3 target, ::UnityEngine::Vector3 second, ::System::Single sqrMagnitudePrecision)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_OFFSET))(target, second, sqrMagnitudePrecision);
		}

		static ::System::Boolean AlmostEquals_1(::UnityEngine::Vector2 target, ::UnityEngine::Vector2 second, ::System::Single sqrMagnitudePrecision)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_1_OFFSET))(target, second, sqrMagnitudePrecision);
		}

		static ::System::Boolean AlmostEquals_2(::UnityEngine::Quaternion target, ::UnityEngine::Quaternion second, ::System::Single maxAngle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_2_OFFSET))(target, second, maxAngle);
		}

		static ::System::Boolean AlmostEquals_3(::System::Single target, ::System::Single second, ::System::Single floatDiff)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_3_OFFSET))(target, second, floatDiff);
		}

		static ::System::Boolean AlmostEquals_4(::System::Single target, ::System::Single second)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ALMOSTEQUALX_ALMOSTEQUALS_4_OFFSET))(target, second);
		}
	};
}
