#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityCameraControlChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182D41E0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYFLASHFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x182D41F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 48630;

	class UIMainCityCameraControlChildWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* playEnd; // 0x10
		::MoleMole::UIMainCityCameraControlChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFlashFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYFLASHFADEOUT_B__0_OFFSET))(this);
		}
	};
}
