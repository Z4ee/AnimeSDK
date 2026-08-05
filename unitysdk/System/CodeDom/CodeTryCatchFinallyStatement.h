#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeCatchClause; }
namespace System::CodeDom { class CodeCatchClauseCollection; }
namespace System::CodeDom { class CodeStatementCollection; }

#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_CATCHCLAUSES_OFFSET UNITYSDK_OFFSET(0x1C6F2D50)
#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_FINALLYSTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C6F2D90)
#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_TRYSTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C6F2DD0)
#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F2CD0)
#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6F2D10)
#define SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2C90)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTryCatchFinallyStatement_TypeDefinitionIndex = 4281;

	class CodeTryCatchFinallyStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::CodeDom::CodeStatement*>* tryStatements, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>* catchClauses)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeStatement*>*, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_1_OFFSET))(this, tryStatements, catchClauses);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeStatement*>* tryStatements, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>* catchClauses, ::Il2CppArray<::System::CodeDom::CodeStatement*>* finallyStatements)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeStatement*>*, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT__CTOR_2_OFFSET))(this, tryStatements, catchClauses, finallyStatements);
		}

		::System::CodeDom::CodeCatchClauseCollection* get_CatchClauses()
		{
			return ((::System::CodeDom::CodeCatchClauseCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_CATCHCLAUSES_OFFSET))(this);
		}

		::System::CodeDom::CodeStatementCollection* get_FinallyStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_FINALLYSTATEMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeStatementCollection* get_TryStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETRYCATCHFINALLYSTATEMENT_GET_TRYSTATEMENTS_OFFSET))(this);
		}
	};
}
