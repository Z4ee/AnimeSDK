#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackerCharging3DModelController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166FFE20)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__0_OFFSET UNITYSDK_OFFSET(0x166FFF90)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__1_OFFSET UNITYSDK_OFFSET(0x166FFFD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerCharging3DModelController___c__DisplayClass49_0_TypeDefinitionIndex = 64130;

	class UIHackerCharging3DModelController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* progressRoot; // 0x10
		::MoleMole::UIHackerCharging3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTransitionToCharging_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__0_OFFSET))(this);
		}

		::System::Void _PlayTransitionToCharging_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__1_OFFSET))(this);
		}
	};
}
