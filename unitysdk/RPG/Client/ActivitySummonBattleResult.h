#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1104;
namespace RPG::Client { class ActivitySummonLevel; }
namespace RPG::Client { class ActivitySummonStage; }

#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B881C80)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B881C00)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1B881C60)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1B881BC0)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_STARS_OFFSET UNITYSDK_OFFSET(0x1B881C40)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1B881C70)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_SET_STARS_OFFSET UNITYSDK_OFFSET(0x1B881C50)
#define RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B881DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonBattleResult_TypeDefinitionIndex = 62003;

	class ActivitySummonBattleResult : public ::System::Object
	{
	public:
		::RPG::Client::ActivitySummonStage* _Stage; // 0x10
		::RPG::Client::ActivitySummonLevel* _Level; // 0x18
		::System::UInt32 _Round_k__BackingField; // 0x20
		::System::UInt32 _Stars_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::ActivitySummonStage* a1, ::RPG::Client::ActivitySummonLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivitySummonStage* get_Stage()
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_STAGE_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonLevel* get_Level()
		{
			return ((::RPG::Client::ActivitySummonLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Stars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_SET_STARS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Round()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_GET_ROUND_OFFSET))(this);
		}

		::System::Void set_Round(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_SET_ROUND_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivitySummonBattleResult* Create(::Class_1_D17272E82AE804C2_1104* a1)
		{
			return ((::RPG::Client::ActivitySummonBattleResult*(*)(::Class_1_D17272E82AE804C2_1104*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONBATTLERESULT_CREATE_OFFSET))(a1);
		}
	};
}
