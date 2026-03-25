#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityStarFightStageConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA4D5030)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA4D5350)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4D5270)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0xA4D5250)
#define RPG_CLIENT_STARFIGHTLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D4490)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightLevelData_TypeDefinitionIndex = 55477;

	class StarFightLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityStarFightStageConfigRow* _LevelRow; // 0x10

		::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA__CTOR_OFFSET))(this, groupID, difficultyLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GETMONSTERDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISFINISH_OFFSET))(this);
		}
	};
}
