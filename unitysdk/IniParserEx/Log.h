#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INIPARSEREX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1B2715A0)
#define INIPARSEREX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B26F4A0)

namespace IniParserEx
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 3932;

	class Log : public ::System::Object
	{
	public:
		static ::System::Void Error(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_LOG_ERROR_OFFSET))(a1);
		}

		static ::System::Void Exception(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_LOG_EXCEPTION_OFFSET))(a1);
		}
	};
}
