#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A110C0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__INITVIDEOPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x15A110D0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__INITVIDEOPLAYER_B__1_OFFSET UNITYSDK_OFFSET(0x15A111B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 74203;

	class UIFullScreenVideoV2PopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare; // 0x10
		::MoleMole::UIFullScreenVideoV2PopWindowController* __4__this; // 0x18
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd; // 0x20
		::System::Boolean onlyPrepare; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitVideoPlayer_b__0(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__INITVIDEOPLAYER_B__0_OFFSET))(this, mpm);
		}

		::System::Void _InitVideoPlayer_b__1(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__INITVIDEOPLAYER_B__1_OFFSET))(this, mpm);
		}
	};
}
