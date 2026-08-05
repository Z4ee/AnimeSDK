#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeSinglePlayerChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192F1B20)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__PLAYROOTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x192F1B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeSinglePlayerChildWindowController___c__DisplayClass38_0_TypeDefinitionIndex = 50550;

	class UIArcadeSinglePlayerChildWindowController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeSinglePlayerChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRootAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__PLAYROOTANIM_B__0_OFFSET))(this);
		}
	};
}
