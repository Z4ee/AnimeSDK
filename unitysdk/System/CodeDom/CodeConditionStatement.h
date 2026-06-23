#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeStatementCollection; }

#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1C8883F0)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_FALSESTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C888470)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_TRUESTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C8884B0)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1C888430)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C888370)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8883B0)
#define SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C888330)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeConditionStatement_TypeDefinitionIndex = 4249;

	class CodeConditionStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* condition, ::Il2CppArray<::System::CodeDom::CodeStatement*>* trueStatements)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_1_OFFSET))(this, condition, trueStatements);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeExpression* condition, ::Il2CppArray<::System::CodeDom::CodeStatement*>* trueStatements, ::Il2CppArray<::System::CodeDom::CodeStatement*>* falseStatements)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT__CTOR_2_OFFSET))(this, condition, trueStatements, falseStatements);
		}

		::System::CodeDom::CodeExpression* get_Condition()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_Condition(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_SET_CONDITION_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatementCollection* get_FalseStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_FALSESTATEMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeStatementCollection* get_TrueStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONDITIONSTATEMENT_GET_TRUESTATEMENTS_OFFSET))(this);
		}
	};
}
