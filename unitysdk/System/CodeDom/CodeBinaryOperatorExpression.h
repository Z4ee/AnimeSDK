#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeBinaryOperatorType.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1C06CD40)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x1C06CDC0)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1C06CE40)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1C06CD80)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x1C06CE00)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1C06CE80)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C06CD00)
#define SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06CCC0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeBinaryOperatorExpression_TypeDefinitionIndex = 4243;

	class CodeBinaryOperatorExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* left, ::System::CodeDom::CodeBinaryOperatorType op, ::System::CodeDom::CodeExpression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::CodeDom::CodeBinaryOperatorType, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION__CTOR_1_OFFSET))(this, left, op, right);
		}

		::System::CodeDom::CodeExpression* get_Left()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_LEFT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeBinaryOperatorType get_Operator()
		{
			return ((::System::CodeDom::CodeBinaryOperatorType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_OPERATOR_OFFSET))(this);
		}

		::System::Void set_Operator(::System::CodeDom::CodeBinaryOperatorType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeBinaryOperatorType))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_OPERATOR_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Right()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBINARYOPERATOREXPRESSION_SET_RIGHT_OFFSET))(this, value);
		}
	};
}
