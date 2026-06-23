#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15785B20)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__PLAYMANUFACTUREANI_B__0_OFFSET UNITYSDK_OFFSET(0x15785B30)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__PLAYMANUFACTUREANI_B__1_OFFSET UNITYSDK_OFFSET(0x15785C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass9_0_TypeDefinitionIndex = 72676;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::MoleMole::UIRABAutoBattleBase3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayManufactureAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__PLAYMANUFACTUREANI_B__0_OFFSET))(this);
		}

		::System::Void _PlayManufactureAni_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS9_0__PLAYMANUFACTUREANI_B__1_OFFSET))(this);
		}
	};
}
