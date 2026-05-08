#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A7D32E0)
#define SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A7D3320)
#define SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D32A0)
#define SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D3260)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMethodReturnStatement_TypeDefinitionIndex = 4268;

	class CodeMethodReturnStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT__CTOR_1_OFFSET))(this, expression);
		}

		::System::CodeDom::CodeExpression* get_Expression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODRETURNSTATEMENT_SET_EXPRESSION_OFFSET))(this, value);
		}
	};
}
