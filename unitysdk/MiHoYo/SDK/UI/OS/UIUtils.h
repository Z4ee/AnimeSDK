#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_UI_OS_UIUTILS_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1B9F0770)
#define MIHOYO_SDK_UI_OS_UIUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F0810)

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int UIUtils_TypeDefinitionIndex = 20238;

	class UIUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIUTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* GetColoredText(::System::String* color, ::System::String* text)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIUTILS_GETCOLOREDTEXT_OFFSET))(color, text);
		}
	};
}
