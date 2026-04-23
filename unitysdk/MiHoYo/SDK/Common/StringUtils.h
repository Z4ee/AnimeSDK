#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_COMMON_STRINGUTILS_GENERATEHIGHTTEXT_OFFSET UNITYSDK_OFFSET(0x173FACB0)
#define MIHOYO_SDK_COMMON_STRINGUTILS_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x173FABF0)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATNOTCSHARPSTANDARDSTRING_OFFSET UNITYSDK_OFFSET(0x173D3990)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x173FAA00)
#define MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMAT_OFFSET UNITYSDK_OFFSET(0x173FAB00)

namespace MiHoYo::SDK::Common
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 7584;

	class StringUtils : public ::System::Object
	{
	public:
		// static const ::System::String* LOG_EVENT_STRING_FORMAT_FAILED; // 0x0

		static ::System::String* SafeFormatString(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATSTRING_OFFSET))(format, args);
		}

		static ::System::String* SafeFormatNotCSharpStandardString(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMATNOTCSHARPSTANDARDSTRING_OFFSET))(format, args);
		}

		static ::System::String* SafeFormat(::System::String* this_, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_SAFEFORMAT_OFFSET))(this_, args);
		}

		static ::System::String* GetColoredText(::System::String* content, ::System::String* highlightColor, ::System::String* highlightText)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_GETCOLOREDTEXT_OFFSET))(content, highlightColor, highlightText);
		}

		static ::System::String* GenerateHightText(::System::String* color, ::System::String* text)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS_GENERATEHIGHTTEXT_OFFSET))(color, text);
		}
	};
}
