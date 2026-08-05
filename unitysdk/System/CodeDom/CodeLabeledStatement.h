#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1DEAE3E0)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT_GET_STATEMENT_OFFSET UNITYSDK_OFFSET(0x1DEAE460)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1DEAE420)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT_SET_STATEMENT_OFFSET UNITYSDK_OFFSET(0x1DEAE4A0)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAE360)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEAE3A0)
#define SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE320)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeLabeledStatement_TypeDefinitionIndex = 4261;

	class CodeLabeledStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_1_OFFSET))(this, label);
		}

		::System::Void _ctor_2(::System::String* label, ::System::CodeDom::CodeStatement* statement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT__CTOR_2_OFFSET))(this, label, statement);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_Label(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT_SET_LABEL_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatement* get_Statement()
		{
			return ((::System::CodeDom::CodeStatement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT_GET_STATEMENT_OFFSET))(this);
		}

		::System::Void set_Statement(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELABELEDSTATEMENT_SET_STATEMENT_OFFSET))(this, value);
		}
	};
}
