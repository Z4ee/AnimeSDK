#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E23E4CB2769CC93F;
namespace MoleMole { class UIFriendChatPopWindowController___c__DisplayClass49_0; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18584A70)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x18584A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass49_1_TypeDefinitionIndex = 66613;

	class UIFriendChatPopWindowController___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::Class_2_E23E4CB2769CC93F* circleDataExt; // 0x10
		::MoleMole::UIFriendChatPopWindowController___c__DisplayClass49_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCircleChatItemSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET))(this);
		}
	};
}
