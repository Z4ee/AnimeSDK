#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_COMMON_STRINGUTILS_GENERATEHIGHTTEXT_OFFSET UNITYSDK_OFFSET(0x1B74F7C0)
#define MIHOYO_SDK_COMMON_STRINGUTILS_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1B74F710)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATNOTCSHARPSTANDARDSTRING_OFFSET UNITYSDK_OFFSET(0x1B72A860)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1B74F520)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B74F620)

namespace MiHoYo::SDK::Common
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 8766;

	class StringUtils : public ::System::Object
	{
	public:
		// static const ::System::String* LOG_EVENT_STRING_FORMAT_FAILED; // 0x0

		static ::System::String* SafeFormatString(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* SafeFormatNotCSharpStandardString(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATNOTCSHARPSTANDARDSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* SafeFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* GetColoredText(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_GETCOLOREDTEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GenerateHightText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_GENERATEHIGHTTEXT_OFFSET))(a1, a2);
		}
	};
}
