#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"
#include "unitysdk/System/CodeDom/FieldDirection.h"

#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1C888570)
#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1C8885F0)
#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1C8885B0)
#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1C888630)
#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C888530)
#define SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8884F0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDirectionExpression_TypeDefinitionIndex = 4254;

	class CodeDirectionExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::FieldDirection direction, ::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::FieldDirection, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION__CTOR_1_OFFSET))(this, direction, expression);
		}

		::System::CodeDom::FieldDirection get_Direction()
		{
			return ((::System::CodeDom::FieldDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::System::CodeDom::FieldDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::FieldDirection))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Expression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIONEXPRESSION_SET_EXPRESSION_OFFSET))(this, value);
		}
	};
}
