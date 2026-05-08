#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS417_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162BDC80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS417_0__PLAYTWOPEOPLECLOSING_B__0_OFFSET UNITYSDK_OFFSET(0x162BDC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass417_0_TypeDefinitionIndex = 41779;

	class UIGalgamePageController___c__DisplayClass417_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_UIRoleInfo* roleInfo; // 0x10
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS417_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTwoPeopleClosing_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS417_0__PLAYTWOPEOPLECLOSING_B__0_OFFSET))(this);
		}
	};
}
