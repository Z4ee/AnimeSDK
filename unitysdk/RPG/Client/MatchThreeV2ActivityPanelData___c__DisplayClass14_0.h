#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ActivityPanelData; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B553F0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x9B55670)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYPANELDATA___C__DISPLAYCLASS14_0___GOTOENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x9B55890)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ActivityPanelData___c__DisplayClass14_0_TypeDefinitionIndex = 50002;

	class MatchThreeV2ActivityPanelData___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2ActivityPanelData* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
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
