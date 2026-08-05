#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackerCharging3DModelController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECC870)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__0_OFFSET UNITYSDK_OFFSET(0x18ECC9E0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___C__DISPLAYCLASS49_0__PLAYTRANSITIONTOCHARGING_B__1_OFFSET UNITYSDK_OFFSET(0x18ECCA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerCharging3DModelController___c__DisplayClass49_0_TypeDefinitionIndex = 56427;

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
