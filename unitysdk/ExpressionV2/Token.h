#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/TokenType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EXPRESSIONV2_TOKEN_INIT_1_OFFSET UNITYSDK_OFFSET(0x1392ADC0)
#define EXPRESSIONV2_TOKEN_INIT_2_OFFSET UNITYSDK_OFFSET(0x1392AE20)
#define EXPRESSIONV2_TOKEN_INIT_3_OFFSET UNITYSDK_OFFSET(0x1392AE80)
#define EXPRESSIONV2_TOKEN_INIT_4_OFFSET UNITYSDK_OFFSET(0x1392AEE0)
#define EXPRESSIONV2_TOKEN_INIT_OFFSET UNITYSDK_OFFSET(0x1392AD70)
#define EXPRESSIONV2_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1392AD60)

namespace ExpressionV2
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 43787;

	class Token : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::Boolean IsUnary; // 0x18
		::System::UInt16 OperatorOpCode; // 0x1A
		::System::Double NumberValue; // 0x20
		::ExpressionV2::TokenType Type; // 0x28
		::System::Int32 OperatorPrecedence; // 0x2C
		::System::Int32 ArgCount; // 0x30
		::System::Int32 StringHashCode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN__CTOR_OFFSET))(this);
		}

		::ExpressionV2::Token* Init(::ExpressionV2::TokenType type)
		{
			return ((::ExpressionV2::Token*(*)(::PVOID, ::ExpressionV2::TokenType))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN_INIT_OFFSET))(this, type);
		}

		::ExpressionV2::Token* Init_1(::ExpressionV2::TokenType type, ::System::String* value)
		{
			return ((::ExpressionV2::Token*(*)(::PVOID, ::ExpressionV2::TokenType, ::System::String*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN_INIT_1_OFFSET))(this, type, value);
		}

		::ExpressionV2::Token* Init_2(::ExpressionV2::TokenType type, ::System::Int32 stringHashCode)
		{
			return ((::ExpressionV2::Token*(*)(::PVOID, ::ExpressionV2::TokenType, ::System::Int32))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN_INIT_2_OFFSET))(this, type, stringHashCode);
		}

		::ExpressionV2::Token* Init_3(::System::Double value)
		{
			return ((::ExpressionV2::Token*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN_INIT_3_OFFSET))(this, value);
		}

		::ExpressionV2::Token* Init_4(::System::UInt16 opCode, ::System::Boolean isUnary)
		{
			return ((::ExpressionV2::Token*(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + EXPRESSIONV2_TOKEN_INIT_4_OFFSET))(this, opCode, isUnary);
		}
	};
}
