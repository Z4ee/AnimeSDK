#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class QuestData; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_EXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x1A635200)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A6352C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_GET_QUEST_OFFSET UNITYSDK_OFFSET(0x1A635150)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A6352D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6350D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionLevelReward_TypeDefinitionIndex = 61615;

	class GridFightDivisionLevelReward : public ::System::Object
	{
	public:
		::RPG::Client::GridFightDivisionLevelConfig* _LevelConfig_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void set_LevelConfig(::RPG::Client::GridFightDivisionLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELREWARD_SET_LEVELCONFIG_OFFSET))(this, a1);
		}
	};
}
