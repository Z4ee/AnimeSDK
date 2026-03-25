#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x189E4BE0)
#define INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x189E4B70)

namespace IniParserEx
{
	inline static constexpr unsigned int CodeParserException_TypeDefinitionIndex = 3738;

	class CodeParserException : public ::System::Exception
	{
	public:
		::System::String* ExceptionInfo; // 0x88
		::System::String* Tag; // 0x90

		::System::Void _ctor(::System::String* tag, ::System::String* exceptionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET))(this, tag, exceptionInfo);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
