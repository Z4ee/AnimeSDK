#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_884FF7AB0BB45750;

#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE141F0)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE142A0)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1AE14240)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x1AE14280)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE142B0)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x1AE14290)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE14100)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE140F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueTournRecordData_TypeDefinitionIndex = 64348;

	class PlayerRogueTournRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _MaxAreaID_k__BackingField; // 0x10
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_884FF7AB0BB45750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_884FF7AB0BB45750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET))(this);
		}

		::System::Void set_MaxAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}
	};
}
