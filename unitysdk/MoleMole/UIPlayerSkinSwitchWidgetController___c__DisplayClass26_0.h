#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerSkinSwitchRoleCardWidgetControllerContext; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }

#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17996940)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS26_0__RESETCONTEXTS_B__0_OFFSET UNITYSDK_OFFSET(0x17996950)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 42659;

	class UIPlayerSkinSwitchWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerSkinSwitchRoleCardWidgetControllerContext* ctx; // 0x10
		::MoleMole::UIPlayerSkinSwitchWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _ResetContexts_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS26_0__RESETCONTEXTS_B__0_OFFSET))(this);
		}
	};
}
