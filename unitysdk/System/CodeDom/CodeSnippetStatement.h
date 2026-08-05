#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODESNIPPETSTATEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CBEED80)
#define SYSTEM_CODEDOM_CODESNIPPETSTATEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CBEEDC0)
#define SYSTEM_CODEDOM_CODESNIPPETSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBEED40)
#define SYSTEM_CODEDOM_CODESNIPPETSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEED00)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeSnippetStatement_TypeDefinitionIndex = 4277;

	class CodeSnippetStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETSTATEMENT__CTOR_1_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETSTATEMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETSTATEMENT_SET_VALUE_OFFSET))(this, value);
		}
	};
}
