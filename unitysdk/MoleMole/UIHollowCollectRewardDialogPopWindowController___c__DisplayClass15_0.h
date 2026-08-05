#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCollectRewardDialogPopWindowController; }
namespace MoleMole { class UIHollowCollectRewardDialogPopWindowController_AnimLevelData; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199D6150)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__PLAYANIMATIONPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x199D6160)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 85818;

	class UIHollowCollectRewardDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCollectRewardDialogPopWindowController* __4__this; // 0x10
		::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimLevelData* animData; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Single newRatio; // 0x28
		::System::Single oldRatio; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimationProgress_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__PLAYANIMATIONPROGRESS_B__1_OFFSET))(this);
		}
	};
}
