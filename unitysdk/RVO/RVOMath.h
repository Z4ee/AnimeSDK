#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RVO_RVOMATH_ABSSQ_OFFSET UNITYSDK_OFFSET(0x1EDB5390)
#define RVO_RVOMATH_ABS_OFFSET UNITYSDK_OFFSET(0x1EDB54C0)
#define RVO_RVOMATH_DET_OFFSET UNITYSDK_OFFSET(0x1EDB5360)
#define RVO_RVOMATH_DISTSQPOINTLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1EDB78B0)
#define RVO_RVOMATH_FABS_OFFSET UNITYSDK_OFFSET(0x1EDB8860)
#define RVO_RVOMATH_LEFTOF_OFFSET UNITYSDK_OFFSET(0x1EDBB700)
#define RVO_RVOMATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1EDB5400)
#define RVO_RVOMATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1EDB5440)
#define RVO_RVOMATH_SQR_OFFSET UNITYSDK_OFFSET(0x1EDB3630)

namespace RVO
{
	inline static constexpr unsigned int RVOMath_TypeDefinitionIndex = 38729;

	struct alignas(1) RVOMath
	{
		// static const ::System::Single RVO_EPSILON; // 0x0

		/*
		static ::System::Single abs(::RVO::Vector2 vector)
		{
			return ((::System::Single(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_ABS_OFFSET))(vector);
		}
		*/

		/*
		static ::System::Single absSq(::RVO::Vector2 vector)
		{
			return ((::System::Single(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_ABSSQ_OFFSET))(vector);
		}
		*/

		/*
		static ::RVO::Vector2 normalize(::RVO::Vector2 vector)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_NORMALIZE_OFFSET))(vector);
		}
		*/

		/*
		static ::System::Single det(::RVO::Vector2 vector1, ::RVO::Vector2 vector2)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_DET_OFFSET))(vector1, vector2);
		}
		*/

		/*
		static ::System::Single distSqPointLineSegment(::RVO::Vector2 vector1, ::RVO::Vector2 vector2, ::RVO::Vector2 vector3)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_DISTSQPOINTLINESEGMENT_OFFSET))(vector1, vector2, vector3);
		}
		*/

		static ::System::Single fabs(::System::Single scalar)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_FABS_OFFSET))(scalar);
		}

		/*
		static ::System::Single leftOf(::RVO::Vector2 a, ::RVO::Vector2 b, ::RVO::Vector2 c)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOMATH_LEFTOF_OFFSET))(a, b, c);
		}
		*/

		static ::System::Single sqr(::System::Single scalar)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_SQR_OFFSET))(scalar);
		}

		static ::System::Single sqrt(::System::Single scalar)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMATH_SQRT_OFFSET))(scalar);
		}
	};
}
