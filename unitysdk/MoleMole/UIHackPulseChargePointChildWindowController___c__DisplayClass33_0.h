#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackPulseChargePointChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHACKPULSECHARGEPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF46B0)
#define MOLEMOLE_UIHACKPULSECHARGEPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS33_0__TRYPLAYROOTFADE_B__0_OFFSET UNITYSDK_OFFSET(0x18AF46C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackPulseChargePointChildWindowController___c__DisplayClass33_0_TypeDefinitionIndex = 74743;

	class UIHackPulseChargePointChildWindowController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHackPulseChargePointChildWindowController* __4__this; // 0x10
		::System::String* clipName; // 0x18
		::System::Action* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKPULSECHARGEPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayRootFade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKPULSECHARGEPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS33_0__TRYPLAYROOTFADE_B__0_OFFSET))(this);
		}
	};
}
