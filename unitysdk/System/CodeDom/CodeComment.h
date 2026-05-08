#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODECOMMENT_GET_DOCCOMMENT_OFFSET UNITYSDK_OFFSET(0x1AFDC240)
#define SYSTEM_CODEDOM_CODECOMMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AFDC2C0)
#define SYSTEM_CODEDOM_CODECOMMENT_SET_DOCCOMMENT_OFFSET UNITYSDK_OFFSET(0x1AFDC280)
#define SYSTEM_CODEDOM_CODECOMMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AFDC300)
#define SYSTEM_CODEDOM_CODECOMMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFDC1C0)
#define SYSTEM_CODEDOM_CODECOMMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFDC200)
#define SYSTEM_CODEDOM_CODECOMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDC180)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeComment_TypeDefinitionIndex = 4043;

	class CodeComment : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::System::String* text, ::System::Boolean docComment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT__CTOR_2_OFFSET))(this, text, docComment);
		}

		::System::Boolean get_DocComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT_GET_DOCCOMMENT_OFFSET))(this);
		}

		::System::Void set_DocComment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT_SET_DOCCOMMENT_OFFSET))(this, value);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENT_SET_TEXT_OFFSET))(this, value);
		}
	};
}
