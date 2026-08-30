#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xC8B2FD0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xC8B33F0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xC8B34C0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC8B32C0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B2FC0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASANYCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xC8B3320)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASRESIDENTCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xC8B3030)

namespace RPG::Client
{
	inline static constexpr unsigned int B51RacingActivityPanelData_TypeDefinitionIndex = 61687;

	class B51RacingActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		// static const ::System::UInt32 _ActivityRewardID = 0xC3BF; // 0x0
		// static const ::System::String* _ResidentRewardQuestListKey; // 0x0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasAnyClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASANYCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean _HasResidentClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASRESIDENTCLAIMABLEREWARD_OFFSET))(this);
		}
	};
}
