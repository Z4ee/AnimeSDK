#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssRewardTimeLinePopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D36960)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18D36970)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18D36AB0)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__3_OFFSET UNITYSDK_OFFSET(0x18D36CC0)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__4_OFFSET UNITYSDK_OFFSET(0x18D36DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardTimeLinePopWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 82464;

	class UIAbyssRewardTimeLinePopWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::System::Action* __9__3; // 0x18
		::MoleMole::UIAbyssRewardTimeLinePopWindowController* __4__this; // 0x20
		::System::Single newRatio; // 0x28
		::System::Int32 newExp; // 0x2C
		::System::Int32 newTotalExp; // 0x30
		::System::Int32 oldLevel; // 0x34
		::System::Int32 oldTotalExp; // 0x38
		::System::Int32 newLevel; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__1_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__3_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__4_OFFSET))(this);
		}
	};
}
