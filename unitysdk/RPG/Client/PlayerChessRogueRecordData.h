#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_884FF7AB0BB45750;

#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1AE04030)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1AE04120)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE04090)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1AE040E0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE04050)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0x1AE04070)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1AE04040)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1AE04130)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE04060)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0x1AE04080)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE04140)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE041F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChessRogueRecordData_TypeDefinitionIndex = 64350;

	class PlayerChessRogueRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _MainStoryCount_k__BackingField; // 0x10
		::System::UInt32 _Difficulty_k__BackingField; // 0x14
		::System::UInt32 _RegularCabinetCnt_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_MainStoryCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RegularCabinetCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET))(this);
		}

		::System::Void set_RegularCabinetCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_884FF7AB0BB45750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_884FF7AB0BB45750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET))(this, a1);
		}
	};
}
