#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class QuestData; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_EXTRAQUEST_OFFSET UNITYSDK_OFFSET(0xA469FB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xA46A070)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xA469F00)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xA46A080)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA469E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionLevelReward_TypeDefinitionIndex = 59390;

	class GridFightDivisionLevelReward : public ::System::Object
	{
	public:
		::RPG::Client::GridFightDivisionLevelConfig* _LevelConfig_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 level, ::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD__CTOR_OFFSET))(this, level, seasonID);
		}

		::RPG::Client::QuestData* get_Quest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_QUEST_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_ExtraQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_EXTRAQUEST_OFFSET))(this);
		}

		::RPG::Client::GridFightDivisionLevelConfig* get_LevelConfig()
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_LEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_LevelConfig(::RPG::Client::GridFightDivisionLevelConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_SET_LEVELCONFIG_OFFSET))(this, value);
		}
	};
}
