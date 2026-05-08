#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class UIFriendChatPopWindowController___c__DisplayClass48_0; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15195800)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x15195810)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass48_1_TypeDefinitionIndex = 58710;

	class UIFriendChatPopWindowController___c__DisplayClass48_1 : public ::System::Object
	{
	public:
		::Class_2_DF2C726EEEEC912D* circleDataExt; // 0x10
		::MoleMole::UIFriendChatPopWindowController___c__DisplayClass48_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCircleChatItemSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET))(this);
		}
	};
}
