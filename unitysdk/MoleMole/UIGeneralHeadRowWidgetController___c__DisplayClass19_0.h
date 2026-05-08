#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167A5A40)
#define MOLEMOLE_UIGENERALHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__PLAYROLEICONANIM_B__0_OFFSET UNITYSDK_OFFSET(0x167A5A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralHeadRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 39354;

	class UIGeneralHeadRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRoleIconAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__PLAYROLEICONANIM_B__0_OFFSET))(this);
		}
	};
}
