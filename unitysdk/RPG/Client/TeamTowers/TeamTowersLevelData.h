#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_ACHIEVEDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1857F110)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x1857F0F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0x1857F0B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1857F090)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1857F0D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1857F070)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x1857F100)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_LEVELUPEXP_OFFSET UNITYSDK_OFFSET(0x1857F0C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1857F0A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1857F0E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1857F080)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1857F160)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersLevelData_TypeDefinitionIndex = 75062;

	class TeamTowersLevelData : public ::System::Object
	{
	public:
		::System::UInt32 _TotalExp_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _MaxLevel_k__BackingField; // 0x18
		::System::UInt32 _CurrentExp_k__BackingField; // 0x1C
		::System::UInt32 _LevelUpExp_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TotalExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_TOTALEXP_OFFSET))(this);
		}

		::System::Void set_TotalExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_TOTALEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelUpExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_LEVELUPEXP_OFFSET))(this);
		}

		::System::Void set_LevelUpExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_LEVELUPEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_SET_CURRENTEXP_OFFSET))(this, a1);
		}

		::System::Boolean get_AchievedMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSLEVELDATA_GET_ACHIEVEDMAXLEVEL_OFFSET))(this);
		}
	};
}
