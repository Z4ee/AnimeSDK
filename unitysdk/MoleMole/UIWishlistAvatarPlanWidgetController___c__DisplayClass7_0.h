#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistAvatarPlanWidgetController; }

#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F03550)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x10F03560)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistAvatarPlanWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 44181;

	class UIWishlistAvatarPlanWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistAvatarPlanWidgetController* __4__this; // 0x10
		::System::Int32 avatarId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
