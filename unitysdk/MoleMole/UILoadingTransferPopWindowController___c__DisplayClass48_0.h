#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UILoadingTransferPopWindowController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19138820)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__INITVIDEOPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x19138830)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__INITVIDEOPLAYER_G__INVOKEPREPARED_1_OFFSET UNITYSDK_OFFSET(0x19138B50)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransferPopWindowController___c__DisplayClass48_0_TypeDefinitionIndex = 85305;

	class UILoadingTransferPopWindowController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoadingTransferPopWindowController* __4__this; // 0x10
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd; // 0x18
		::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare; // 0x20
		::System::String* fakeLoadingVideoPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitVideoPlayer_b__0(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__INITVIDEOPLAYER_B__0_OFFSET))(this, mpm);
		}

		::System::Void _InitVideoPlayer_g__InvokePrepared_1(::MoleMole::MultipleVideoPlayerManager* mpm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_0__INITVIDEOPLAYER_G__INVOKEPREPARED_1_OFFSET))(this, mpm);
		}
	};
}
