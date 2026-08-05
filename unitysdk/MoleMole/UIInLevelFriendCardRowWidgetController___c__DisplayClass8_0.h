#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelFriendCardContext; }
namespace MoleMole { class UIInLevelFriendCardRowWidgetController; }

#define MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182A1F10)
#define MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONBANBTNCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x182A1F20)
#define MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONBANBTNCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x182A1F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelFriendCardRowWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 57429;

	class UIInLevelFriendCardRowWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelFriendCardRowWidgetController* __4__this; // 0x10
		::MoleMole::UIInLevelFriendCardContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBanBtnCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONBANBTNCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _OnBanBtnCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONBANBTNCALLBACK_B__1_OFFSET))(this);
		}
	};
}
