#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x7B150)
#define RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_METHOD_2_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x7B0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineBirdWay_CurveRange_TypeDefinitionIndex = 48416;

	struct alignas(8) AirlineBirdWay_CurveRange
	{
		::System::Int32 startPointIndex; // 0x10
		::System::Int32 endPointIndex; // 0x14
		::System::Single duration; // 0x18
		::UnityEngine::AnimationCurve* curve; // 0x20
		::System::Single StartPosition; // 0x28
		::System::Single EndPosition; // 0x2C

		::System::Boolean Method_2_D7DDA895983CCCB2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_METHOD_2_D7DDA895983CCCB2_OFFSET))(this, a1);
		}

		::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
