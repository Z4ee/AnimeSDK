#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1B1E19A0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1B1E19E0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E1960)
#define SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E1920)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeExpressionStatement_TypeDefinitionIndex = 4257;

	class CodeExpressionStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT__CTOR_1_OFFSET))(this, expression);
		}

		::System::CodeDom::CodeExpression* get_Expression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONSTATEMENT_SET_EXPRESSION_OFFSET))(this, value);
		}
	};
}
