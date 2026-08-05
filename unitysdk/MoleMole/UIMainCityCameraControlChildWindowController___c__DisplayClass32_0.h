#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityCameraControlChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19139980)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS32_0__PHOTOUIPLAYFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x19139990)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c__DisplayClass32_0_TypeDefinitionIndex = 48631;

	class UIMainCityCameraControlChildWindowController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityCameraControlChildWindowController* __4__this; // 0x10
		::System::Action* end; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _PhotoUIPlayFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS32_0__PHOTOUIPLAYFADEOUT_B__0_OFFSET))(this);
		}
	};
}
