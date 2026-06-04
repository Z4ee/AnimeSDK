#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildRewardRow; }

#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0xB93FFC0)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0xB93FFA0)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB93FF60)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REQUIREDEXP_OFFSET UNITYSDK_OFFSET(0xB93FF80)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB93FFE0)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD_SET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0xB93FFB0)
#define RPG_CLIENT_EVOLVEBUILDFAMEREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xB93FF50)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildFameReward_TypeDefinitionIndex = 59719;

	class EvolveBuildFameReward : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardRow* _Row; // 0x10
		::System::UInt32 _LevelUpExp_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::EvolveBuildRewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD__CTOR_OFFSET))(this, a1);
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

		::System::Void set_LevelUpExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDFAMEREWARD_SET_LEVELUPEXP_OFFSET))(this, a1);
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
