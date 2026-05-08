#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RVO_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B63A070)
#define RVO_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B63A040)
#define RVO_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B639EE0)
#define RVO_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1B63D480)
#define RVO_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B639F80)
#define RVO_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B639EB0)
#define RVO_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B639F60)
#define RVO_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9862D0)
#define RVO_VECTOR2_X_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define RVO_VECTOR2_Y_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define RVO_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x43F560)

namespace RVO
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 36463;

	struct alignas(4) Vector2
	{
		::System::Single x_; // 0x10
		::System::Single y_; // 0x14

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2__CTOR_OFFSET))(this, x, y);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::Single x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_VECTOR2_X_OFFSET))(this);
		}

		::System::Single y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_VECTOR2_Y_OFFSET))(this);
		}

		static ::System::Single op_Multiply(::RVO::Vector2 vector1, ::RVO::Vector2 vector2)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_OFFSET))(vector1, vector2);
		}

		static ::RVO::Vector2 op_Multiply_1(::System::Single scalar, ::RVO::Vector2 vector)
		{
			return ((::RVO::Vector2(*)(::System::Single, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_1_OFFSET))(scalar, vector);
		}

		static ::RVO::Vector2 op_Multiply_2(::RVO::Vector2 vector, ::System::Single scalar)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_2_OFFSET))(vector, scalar);
		}

		static ::RVO::Vector2 op_Division(::RVO::Vector2 vector, ::System::Single scalar)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_DIVISION_OFFSET))(vector, scalar);
		}

		static ::RVO::Vector2 op_Addition(::RVO::Vector2 vector1, ::RVO::Vector2 vector2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_ADDITION_OFFSET))(vector1, vector2);
		}

		static ::RVO::Vector2 op_Subtraction(::RVO::Vector2 vector1, ::RVO::Vector2 vector2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_SUBTRACTION_OFFSET))(vector1, vector2);
		}

		static ::RVO::Vector2 op_UnaryNegation(::RVO::Vector2 vector)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_UNARYNEGATION_OFFSET))(vector);
		}
	};
}
