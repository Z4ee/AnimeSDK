#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RVO_RVOMATH_ABSSQ_OFFSET UNITYSDK_OFFSET(0xB087D70)
#define RVO_RVOMATH_ABS_OFFSET UNITYSDK_OFFSET(0xB087E30)
#define RVO_RVOMATH_DET_OFFSET UNITYSDK_OFFSET(0xB087D40)
#define RVO_RVOMATH_DISTSQPOINTLINESEGMENT_OFFSET UNITYSDK_OFFSET(0xB08B410)
#define RVO_RVOMATH_FABS_OFFSET UNITYSDK_OFFSET(0xB08CD40)
#define RVO_RVOMATH_LEFTOF_OFFSET UNITYSDK_OFFSET(0xB0901C0)
#define RVO_RVOMATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xB087DA0)
#define RVO_RVOMATH_SQRT_OFFSET UNITYSDK_OFFSET(0xB087E10)
#define RVO_RVOMATH_SQR_OFFSET UNITYSDK_OFFSET(0xB085800)

namespace RVO
{
	inline static constexpr unsigned int RVOMath_TypeDefinitionIndex = 46039;

	struct alignas(1) RVOMath
	{
		// static const ::System::Single RVO_EPSILON; // 0x0

		/*
		static ::System::Single abs(::RVO::Vector2 a1)
		{
			return ((::System::Single(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_ABS_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Single absSq(::RVO::Vector2 a1)
		{
			return ((::System::Single(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_ABSSQ_OFFSET))(a1);
		}
		*/

		/*
		static ::RVO::Vector2 normalize(::RVO::Vector2 a1)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_NORMALIZE_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Single det(::RVO::Vector2 a1, ::RVO::Vector2 a2)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_DET_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single distSqPointLineSegment(::RVO::Vector2 a1, ::RVO::Vector2 a2, ::RVO::Vector2 a3)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_DISTSQPOINTLINESEGMENT_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Single fabs(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_FABS_OFFSET))(a1);
		}

		/*
		static ::System::Single leftOf(::RVO::Vector2 a1, ::RVO::Vector2 a2, ::RVO::Vector2 a3)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_LEFTOF_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Single sqr(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_SQR_OFFSET))(a1);
		}

		static ::System::Single sqrt(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_SQRT_OFFSET))(a1);
		}
	};
}
