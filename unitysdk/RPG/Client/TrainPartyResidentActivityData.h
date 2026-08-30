#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xE27E570)
#define RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE27E630)
#define RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE27E560)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyResidentActivityData_TypeDefinitionIndex = 68153;

	class TrainPartyResidentActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		// static const ::System::UInt32 GIFTS_ROLE_QUEST_ID = 0x5C0012; // 0x0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYRESIDENTACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}
	};
}
