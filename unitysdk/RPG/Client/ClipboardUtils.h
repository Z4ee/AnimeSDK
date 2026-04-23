#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET UNITYSDK_OFFSET(0x19D92CD0)
#define RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x19D92CB0)
#define RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x19D92CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClipboardUtils_TypeDefinitionIndex = 9632;

	class ClipboardUtils : public ::System::Object
	{
	public:
		static ::System::Void CopyToClipboard(::System::String* input)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET))(input);
		}

		static ::System::String* GetTextFromClipboard()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET))();
		}

		static ::System::Boolean CheckClipboardIsAllNumber(::System::String* clipboard)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET))(clipboard);
		}
	};
}
