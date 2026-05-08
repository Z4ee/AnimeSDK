#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeStatementCollection; }

#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_INCREMENTSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1A5697A0)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_INITSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1A569820)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_STATEMENTS_OFFSET UNITYSDK_OFFSET(0x1A5698A0)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_TESTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A5698E0)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_INCREMENTSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1A5697E0)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_INITSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1A569860)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_TESTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A569920)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A569760)
#define SYSTEM_CODEDOM_CODEITERATIONSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A569720)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeIterationStatement_TypeDefinitionIndex = 4261;

	class CodeIterationStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeStatement* initStatement, ::System::CodeDom::CodeExpression* testExpression, ::System::CodeDom::CodeStatement* incrementStatement, ::Il2CppArray<::System::CodeDom::CodeStatement*>* statements)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*, ::System::CodeDom::CodeExpression*, ::System::CodeDom::CodeStatement*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT__CTOR_1_OFFSET))(this, initStatement, testExpression, incrementStatement, statements);
		}

		::System::CodeDom::CodeStatement* get_IncrementStatement()
		{
			return ((::System::CodeDom::CodeStatement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_INCREMENTSTATEMENT_OFFSET))(this);
		}

		::System::Void set_IncrementStatement(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_INCREMENTSTATEMENT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatement* get_InitStatement()
		{
			return ((::System::CodeDom::CodeStatement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_INITSTATEMENT_OFFSET))(this);
		}

		::System::Void set_InitStatement(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_INITSTATEMENT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatementCollection* get_Statements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_STATEMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeExpression* get_TestExpression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_GET_TESTEXPRESSION_OFFSET))(this);
		}

		::System::Void set_TestExpression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEITERATIONSTATEMENT_SET_TESTEXPRESSION_OFFSET))(this, value);
		}
	};
}
