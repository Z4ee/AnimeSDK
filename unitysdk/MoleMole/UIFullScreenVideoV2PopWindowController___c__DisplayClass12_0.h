#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1699F060)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITVIDEOPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1699F070)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITVIDEOPLAYER_B__1_OFFSET UNITYSDK_OFFSET(0x1699F160)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 74205;

	class UIFullScreenVideoV2PopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFullScreenVideoV2PopWindowController* __4__this; // 0x10
		::System::Action_1<::Class_1_E9529ED64113E4E9*>* onPrepare; // 0x18
		::System::Action_1<::Class_1_E9529ED64113E4E9*>* onEnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitVideoPlayer_b__0(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITVIDEOPLAYER_B__0_OFFSET))(this, mpm);
		}

		::System::Void _InitVideoPlayer_b__1(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITVIDEOPLAYER_B__1_OFFSET))(this, mpm);
		}
	};
}
