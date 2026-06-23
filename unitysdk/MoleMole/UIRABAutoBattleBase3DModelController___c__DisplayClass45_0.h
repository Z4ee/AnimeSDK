#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157856F0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__ONLOADMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x15785700)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__ONLOADMODEL_B__1_OFFSET UNITYSDK_OFFSET(0x15785900)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass45_0_TypeDefinitionIndex = 72672;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIRABAutoBattleBase3DModelController* __4__this; // 0x20
		::System::String* switchOut; // 0x28
		::System::Single switchOutTime_End; // 0x30
		::System::Single switchOutTime_Start; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__ONLOADMODEL_B__0_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS45_0__ONLOADMODEL_B__1_OFFSET))(this);
		}
	};
}
