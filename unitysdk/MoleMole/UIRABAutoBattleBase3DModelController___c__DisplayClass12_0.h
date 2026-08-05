#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF0B20)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS12_0__PLAYSTAGEUPANI_B__0_OFFSET UNITYSDK_OFFSET(0x12FF0B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass12_0_TypeDefinitionIndex = 86929;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABAutoBattleBase3DModelController* __4__this; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStageUpAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS12_0__PLAYSTAGEUPANI_B__0_OFFSET))(this);
		}
	};
}
