#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODESNIPPETEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DD0F260)
#define SYSTEM_CODEDOM_CODESNIPPETEXPRESSION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DD0F2A0)
#define SYSTEM_CODEDOM_CODESNIPPETEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD0F220)
#define SYSTEM_CODEDOM_CODESNIPPETEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0F1E0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeSnippetExpression_TypeDefinitionIndex = 4276;

	class CodeSnippetExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETEXPRESSION__CTOR_1_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETEXPRESSION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETEXPRESSION_SET_VALUE_OFFSET))(this, value);
		}
	};
}
