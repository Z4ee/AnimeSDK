#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingPowerRankData; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE1358F0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS10_0__FETCHSORTEDSAMEGROUPPOWERRANK_B__0_OFFSET UNITYSDK_OFFSET(0xE135A90)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankInfo___c__DisplayClass10_0_TypeDefinitionIndex = 62050;

	class SwordTrainingPowerRankInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FetchSortedSameGroupPowerRank_b__0(::RPG::Client::SwordTrainingPowerRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingPowerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS10_0__FETCHSORTEDSAMEGROUPPOWERRANK_B__0_OFFSET))(this, a1);
		}
	};
}
