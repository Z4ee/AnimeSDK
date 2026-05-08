#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeMember.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A7D3720)
#define SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A7D3760)
#define SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D36E0)
#define SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D36A0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeSnippetTypeMember_TypeDefinitionIndex = 4279;

	class CodeSnippetTypeMember : public ::System::CodeDom::CodeTypeMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER__CTOR_1_OFFSET))(this, text);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETTYPEMEMBER_SET_TEXT_OFFSET))(this, value);
		}
	};
}
