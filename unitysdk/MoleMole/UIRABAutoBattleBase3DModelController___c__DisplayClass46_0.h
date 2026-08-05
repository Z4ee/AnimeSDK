#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D374F0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x17D37500)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__1_OFFSET UNITYSDK_OFFSET(0x17D37980)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__2_OFFSET UNITYSDK_OFFSET(0x17D37770)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__3_OFFSET UNITYSDK_OFFSET(0x17D37960)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass46_0_TypeDefinitionIndex = 86928;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::String* switchOut; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::Battle::Entity* entity; // 0x20
		::System::Action* __9__3; // 0x28
		::System::Action* __9__1; // 0x30
		::MoleMole::UIRABAutoBattleBase3DModelController* __4__this; // 0x38
		::System::Single switchOutTime_Start; // 0x40
		::System::Single switchOutTime_End; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__0_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__2_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__3_OFFSET))(this);
		}

		::System::Void _OnLoadModel_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS46_0__ONLOADMODEL_B__1_OFFSET))(this);
		}
	};
}
