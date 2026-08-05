#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopRelayAttackQTEButtonChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UICOOPRELAYATTACKQTEBUTTONCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA57E0)
#define MOLEMOLE_UICOOPRELAYATTACKQTEBUTTONCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYFADEOUTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x19AA57F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRelayAttackQTEButtonChildWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 82914;

	class UICoopRelayAttackQTEButtonChildWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopRelayAttackQTEButtonChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPRELAYATTACKQTEBUTTONCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPRELAYATTACKQTEBUTTONCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYFADEOUTANIM_B__0_OFFSET))(this);
		}
	};
}
