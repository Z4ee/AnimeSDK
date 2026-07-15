#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C4C3610)
#define INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C35A0)

namespace IniParserEx
{
	inline static constexpr unsigned int CodeParserException_TypeDefinitionIndex = 3918;

	class CodeParserException : public ::System::Exception
	{
	public:
		::System::String* Tag; // 0x88
		::System::String* ExceptionInfo; // 0x90

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
