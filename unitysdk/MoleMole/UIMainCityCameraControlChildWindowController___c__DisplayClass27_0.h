#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityCameraControlChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174D23F0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYFLASHFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x174D2400)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 78534;

	class UIMainCityCameraControlChildWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* playEnd; // 0x10
		::MoleMole::UIMainCityCameraControlChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFlashFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYFLASHFADEOUT_B__0_OFFSET))(this);
		}
	};
}
