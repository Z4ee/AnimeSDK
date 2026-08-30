#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingPowerRankData; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48AA50)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS6_0__GETPOWERRANKBYRANKID_B__0_OFFSET UNITYSDK_OFFSET(0x1B48B4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankInfo___c__DisplayClass6_0_TypeDefinitionIndex = 62051;

	class SwordTrainingPowerRankInfo___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 rankID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPowerRankByRankID_b__0(::RPG::Client::SwordTrainingPowerRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingPowerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__DISPLAYCLASS6_0__GETPOWERRANKBYRANKID_B__0_OFFSET))(this, a1);
		}
	};
}
