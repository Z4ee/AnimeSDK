#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABStageRewardPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3DB20)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__0_OFFSET UNITYSDK_OFFSET(0x17D3DB30)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__2_OFFSET UNITYSDK_OFFSET(0x17D3DCC0)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__3_OFFSET UNITYSDK_OFFSET(0x17D3DE00)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_G__SHOWSTAGEUNLOCKPOP_1_OFFSET UNITYSDK_OFFSET(0x17D3DE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageRewardPopWindowController___c__DisplayClass33_0_TypeDefinitionIndex = 77886;

	class UIRABStageRewardPopWindowController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIRABStageRewardPopWindowController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 toStageId; // 0x28
		::System::Int32 fromStageId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStageRewardSuccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__0_OFFSET))(this);
		}

		::System::Void _OnStageRewardSuccess_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__2_OFFSET))(this);
		}

		::System::Void _OnStageRewardSuccess_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_B__3_OFFSET))(this);
		}

		::System::Void _OnStageRewardSuccess_g__ShowStageUnlockPop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONSTAGEREWARDSUCCESS_G__SHOWSTAGEUNLOCKPOP_1_OFFSET))(this);
		}
	};
}
