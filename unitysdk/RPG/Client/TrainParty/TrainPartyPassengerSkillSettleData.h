#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERSKILLSETTLEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCABA110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERSKILLSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB7CC0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerSkillSettleData_TypeDefinitionIndex = 69433;

	class TrainPartyPassengerSkillSettleData : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* LevelUpSkillInfo; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* NewSkillInfo; // 0x18
		::System::Boolean IsNeedReplace; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERSKILLSETTLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERSKILLSETTLEDATA_CLEAR_OFFSET))(this);
		}
	};
}
