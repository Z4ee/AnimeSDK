#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ActivityPanelData; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD65AB80)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD65ADB0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xD65AF90)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ActivityPanelData___c__DisplayClass14_0_TypeDefinitionIndex = 61730;

	class MatchThreeV2ActivityPanelData___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::MatchThreeV2ActivityPanelData* __4__this; // 0x18
		::System::Int32 initialTabUid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__0_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__1_OFFSET))(this);
		}
	};
}
