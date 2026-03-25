#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildRewardRow; }

#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0x9631640)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0x9631620)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x96315E0)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REQUIREDEXP_OFFSET UNITYSDK_OFFSET(0x9631600)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9631660)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_SET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0x9631630)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x96315D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildFameReward_TypeDefinitionIndex = 51841;

	class EvolveBuildFameReward : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardRow* _Row; // 0x10
		::System::UInt32 _LevelUpExp_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::EvolveBuildRewardRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_RequiredExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REQUIREDEXP_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVELUPEXP_OFFSET))(this);
		}

		::System::Void set_LevelUpExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_SET_LEVELUPEXP_OFFSET))(this, value);
		}

		::System::Boolean get_IsLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_ISLONGTAIL_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REWARDID_OFFSET))(this);
		}
	};
}
