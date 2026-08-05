#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivePropsPopWindowController___c__DisplayClass26_0; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x191E21B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_1__ONFAVORITEBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x191E21C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass26_1_TypeDefinitionIndex = 72303;

	class UIActivePropsPopWindowController___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::MoleMole::UIActivePropsPopWindowController___c__DisplayClass26_0* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnFavoriteBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_1__ONFAVORITEBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
