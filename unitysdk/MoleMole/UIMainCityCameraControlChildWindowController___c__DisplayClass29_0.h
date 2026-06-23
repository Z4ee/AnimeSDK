#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityCameraControlChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16933AA0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS29_0__PHOTOUIPLAYFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x16933AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c__DisplayClass29_0_TypeDefinitionIndex = 78535;

	class UIMainCityCameraControlChildWindowController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action* end; // 0x10
		::MoleMole::UIMainCityCameraControlChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _PhotoUIPlayFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS29_0__PHOTOUIPLAYFADEOUT_B__0_OFFSET))(this);
		}
	};
}
