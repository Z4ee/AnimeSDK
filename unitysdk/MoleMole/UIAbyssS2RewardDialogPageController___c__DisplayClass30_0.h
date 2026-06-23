#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2RewardDialogPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17317360)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__0_OFFSET UNITYSDK_OFFSET(0x17317370)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__1_OFFSET UNITYSDK_OFFSET(0x173174B0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__3_OFFSET UNITYSDK_OFFSET(0x173176C0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__4_OFFSET UNITYSDK_OFFSET(0x173177C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogPageController___c__DisplayClass30_0_TypeDefinitionIndex = 66542;

	class UIAbyssS2RewardDialogPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::System::Action* __9__4; // 0x18
		::MoleMole::UIAbyssS2RewardDialogPageController* __4__this; // 0x20
		::System::Int32 newLevel; // 0x28
		::System::Int32 newTotalExp; // 0x2C
		::System::Int32 newExp; // 0x30
		::System::Int32 oldLevel; // 0x34
		::System::Single newRatio; // 0x38
		::System::Int32 oldTotalExp; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__1_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__3_OFFSET))(this);
		}

		::System::Void _PlayExpAnim_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYEXPANIM_B__4_OFFSET))(this);
		}
	};
}
