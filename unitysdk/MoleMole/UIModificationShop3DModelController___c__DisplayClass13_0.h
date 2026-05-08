#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIModificationShop3DModelController; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15578F70)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_B__1_OFFSET UNITYSDK_OFFSET(0x15579160)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_B__2_OFFSET UNITYSDK_OFFSET(0x155793A0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_G__NEWFADE_0_OFFSET UNITYSDK_OFFSET(0x15578F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController___c__DisplayClass13_0_TypeDefinitionIndex = 77494;

	class UIModificationShop3DModelController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animator* newBuddy; // 0x10
		::MoleMole::UIModificationShop3DModelController* __4__this; // 0x18
		::System::Int32 nextBuddyID; // 0x20
		::System::Boolean isLeft; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchBuddy_g__newFade_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_G__NEWFADE_0_OFFSET))(this);
		}

		::System::Void _PlaySwitchBuddy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_B__1_OFFSET))(this);
		}

		::System::Void _PlaySwitchBuddy_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___C__DISPLAYCLASS13_0__PLAYSWITCHBUDDY_B__2_OFFSET))(this);
		}
	};
}
