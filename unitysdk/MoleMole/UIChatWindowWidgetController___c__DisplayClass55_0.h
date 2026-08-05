#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatWindowWidgetController; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A99DF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS55_0__ONCLICKSENDFRIENDEMOJI_B__0_OFFSET UNITYSDK_OFFSET(0x19A9D2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass55_0_TypeDefinitionIndex = 72757;

	class UIChatWindowWidgetController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x10
		::System::Int32 emojiKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendEmoji_b__0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS55_0__ONCLICKSENDFRIENDEMOJI_B__0_OFFSET))(this, isAllow);
		}
	};
}
