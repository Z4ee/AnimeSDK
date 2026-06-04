#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET UNITYSDK_OFFSET(0x1AC10890)
#define RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1AC10870)
#define RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1AC10880)

namespace RPG::Client
{
	inline static constexpr unsigned int ClipboardUtils_TypeDefinitionIndex = 33401;

	class ClipboardUtils : public ::System::Object
	{
	public:
		static ::System::Void CopyToClipboard(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET))(a1);
		}

		static ::System::String* GetTextFromClipboard()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET))();
		}

		static ::System::Boolean CheckClipboardIsAllNumber(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET))(a1);
		}
	};
}
