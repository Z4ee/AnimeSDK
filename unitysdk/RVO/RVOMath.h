#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RVO_RVOMATH_ABSSQ_OFFSET UNITYSDK_OFFSET(0x1924C9F0)
#define RVO_RVOMATH_ABS_OFFSET UNITYSDK_OFFSET(0x1924CB60)
#define RVO_RVOMATH_DET_OFFSET UNITYSDK_OFFSET(0x1924C9C0)
#define RVO_RVOMATH_DISTSQPOINTLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x19250100)
#define RVO_RVOMATH_FABS_OFFSET UNITYSDK_OFFSET(0x19251A60)
#define RVO_RVOMATH_LEFTOF_OFFSET UNITYSDK_OFFSET(0x19254EF0)
#define RVO_RVOMATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1924CA70)
#define RVO_RVOMATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1924CAE0)
#define RVO_RVOMATH_SQR_OFFSET UNITYSDK_OFFSET(0x1924A420)

namespace RVO
{
	inline static constexpr unsigned int RVOMath_TypeDefinitionIndex = 42718;

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
