#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_UTILITY_ENCODEBYTETOSTRINGASCII_OFFSET UNITYSDK_OFFSET(0x1DE3CC60)
#define FOUNDATION_UTILITY_ENCODESTRINGTOBYTEASCII_OFFSET UNITYSDK_OFFSET(0x1DE3CBB0)
#define FOUNDATION_UTILITY_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1DE3CA40)
#define FOUNDATION_UTILITY_ISNAPQUICKSTARTGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1DE3CA00)

namespace Foundation
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 8278;

	class Utility : public ::System::Object
	{
	public:
		static ::System::Boolean IsNapQuickStartGameMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UTILITY_ISNAPQUICKSTARTGAMEMODE_OFFSET))();
		}

		static ::System::String* GetStackTrace(::System::Int32 skips)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UTILITY_GETSTACKTRACE_OFFSET))(skips);
		}

		static ::Il2CppArray<::System::Byte>* EncodeStringToByteAscii(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_UTILITY_ENCODESTRINGTOBYTEASCII_OFFSET))(str);
		}

		static ::System::String* EncodeByteToStringAscii(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_UTILITY_ENCODEBYTETOSTRINGASCII_OFFSET))(bytes);
		}
	};
}
