#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15785A70)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS6_0__PLAYSWITCHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x15785A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass6_0_TypeDefinitionIndex = 72677;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* nextUIOpenAction; // 0x10
		::MoleMole::UIRABAutoBattleBase3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS6_0__PLAYSWITCHANIMATION_B__0_OFFSET))(this);
		}
	};
}
