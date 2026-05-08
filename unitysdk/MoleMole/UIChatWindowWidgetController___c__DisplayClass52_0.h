#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatWindowWidgetController; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16814990)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS52_0__ONCLICKSENDFRIENDEMOJI_B__0_OFFSET UNITYSDK_OFFSET(0x168149A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass52_0_TypeDefinitionIndex = 66839;

	class UIChatWindowWidgetController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x10
		::System::Int32 emojiKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendEmoji_b__0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS52_0__ONCLICKSENDFRIENDEMOJI_B__0_OFFSET))(this, isAllow);
		}
	};
}
