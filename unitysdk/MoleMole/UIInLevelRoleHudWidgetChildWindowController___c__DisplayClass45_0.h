#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelRoleHudWidgetChildWindowController; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDF100)
#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS45_0__ONLOCALAVATARCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x17DDF110)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudWidgetChildWindowController___c__DisplayClass45_0_TypeDefinitionIndex = 43996;

	class UIInLevelRoleHudWidgetChildWindowController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* fromEntity; // 0x10
		::MoleMole::UIInLevelRoleHudWidgetChildWindowController* __4__this; // 0x18
		::MoleMole::Battle::Entity* toEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLocalAvatarChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS45_0__ONLOCALAVATARCHANGED_B__0_OFFSET))(this);
		}
	};
}
