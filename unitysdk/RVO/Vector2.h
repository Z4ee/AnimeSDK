#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RVO_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1924CB30)
#define RVO_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1924CB00)
#define RVO_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1924C990)
#define RVO_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x19250290)
#define RVO_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1924CA30)
#define RVO_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1924C960)
#define RVO_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1924CA10)
#define RVO_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39CFC00)
#define RVO_VECTOR2_X_OFFSET UNITYSDK_OFFSET(0x167F50)
#define RVO_VECTOR2_Y_OFFSET UNITYSDK_OFFSET(0x7A80F0)
#define RVO_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8510)

namespace RVO
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 42721;

	struct alignas(4) Vector2
	{
		::System::Single x_; // 0x10
		::System::Single y_; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2__CTOR_OFFSET))(this, a1, a2);
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

		static ::System::Single op_Multiply(::RVO::Vector2 a1, ::RVO::Vector2 a2)
		{
			return ((::System::Single(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_Multiply_1(::System::Single a1, ::RVO::Vector2 a2)
		{
			return ((::RVO::Vector2(*)(::System::Single, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_Multiply_2(::RVO::Vector2 a1, ::System::Single a2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_Division(::RVO::Vector2 a1, ::System::Single a2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_Addition(::RVO::Vector2 a1, ::RVO::Vector2 a2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_Subtraction(::RVO::Vector2 a1, ::RVO::Vector2 a2)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RVO::Vector2 op_UnaryNegation(::RVO::Vector2 a1)
		{
			return ((::RVO::Vector2(*)(::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_VECTOR2_OP_UNARYNEGATION_OFFSET))(a1);
		}
	};
}
