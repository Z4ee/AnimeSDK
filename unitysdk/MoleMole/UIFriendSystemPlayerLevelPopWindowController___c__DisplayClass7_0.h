#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendSystemPlayerLevelPopWindowController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157EFA10)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x157EFA20)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__1_OFFSET UNITYSDK_OFFSET(0x157EFA40)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__3_OFFSET UNITYSDK_OFFSET(0x157EFA60)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__4_OFFSET UNITYSDK_OFFSET(0x157EFAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerLevelPopWindowController___c__DisplayClass7_0_TypeDefinitionIndex = 42714;

	class UIFriendSystemPlayerLevelPopWindowController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendSystemPlayerLevelPopWindowController* __4__this; // 0x10
		::System::Int32 levelRewardStartIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitInterKnotRewards_b__0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__0_OFFSET))(this, args);
		}

		::System::Void _InitInterKnotRewards_b__1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__1_OFFSET))(this, args);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitInterKnotRewards_b__3(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__3_OFFSET))(this, reference);
		}

		::System::Void _InitInterKnotRewards_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITINTERKNOTREWARDS_B__4_OFFSET))(this);
		}
	};
}
