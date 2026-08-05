#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185855C0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__TRYPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x185855D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 78932;

	class UIFullScreenVideoV2PopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* prepareFinished; // 0x10
		::System::Action* onEnd; // 0x18
		::MoleMole::UIFullScreenVideoV2PopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlay_b__0(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__TRYPLAY_B__0_OFFSET))(this, mpm);
		}
	};
}
