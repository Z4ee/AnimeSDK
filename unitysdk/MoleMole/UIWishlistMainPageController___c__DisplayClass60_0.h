#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistMainPageController; }

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D87FA0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__GOTOROLEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x14D87FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass60_0_TypeDefinitionIndex = 65457;

	class UIWishlistMainPageController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistMainPageController* __4__this; // 0x10
		::System::Boolean forceClickEquip; // 0x18
		::System::Boolean forceClickWeapon; // 0x19
		::System::Int32 autoTabIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoRoleInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__GOTOROLEINFO_B__0_OFFSET))(this);
		}
	};
}
