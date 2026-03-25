#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9975710)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9974D40)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9975780)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9975760)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_MAX_OFFSET UNITYSDK_OFFSET(0x99757A0)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x99757C0)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x99757E0)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9975790)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9975770)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_MAX_OFFSET UNITYSDK_OFFSET(0x99757B0)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x99757D0)
#define RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x99748B0)

namespace RPG::Client::Level
{
	inline static constexpr unsigned int ChenLingConquerLevel_TypeDefinitionIndex = 61767;

	class ChenLingConquerLevel : public ::System::Object
	{
	public:
		::System::UInt32 _PrivilegePoints_k__BackingField; // 0x10
		::System::UInt32 _Max_k__BackingField; // 0x14
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _Current_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::Client::Level::ChenLingConquerLevel* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Level::ChenLingConquerLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_COPYFROM_OFFSET))(this, other);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_CLEAR_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_CURRENT_OFFSET))(this, value);
		}

		::System::UInt32 get_Max()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_MAX_OFFSET))(this, value);
		}

		::System::UInt32 get_PrivilegePoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_PRIVILEGEPOINTS_OFFSET))(this);
		}

		::System::Void set_PrivilegePoints(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_SET_PRIVILEGEPOINTS_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_Progress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVEL_CHENLINGCONQUERLEVEL_GET_PROGRESS_OFFSET))(this);
		}
	};
}
