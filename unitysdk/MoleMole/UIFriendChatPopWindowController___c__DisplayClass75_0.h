#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendChatItemContext; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1938EA40)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__FINDCHATTINGBRIEFINFOBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1938EA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass75_0_TypeDefinitionIndex = 66609;

	class UIFriendChatPopWindowController___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::UInt32 friendUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindChattingBriefInfoByUID_b__0(::MoleMole::UIFriendChatItemContext* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__FINDCHATTINGBRIEFINFOBYUID_B__0_OFFSET))(this, item);
		}
	};
}
