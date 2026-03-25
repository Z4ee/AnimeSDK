#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_4C5FA33230DE3480;

#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9FE30A0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FE3120)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9FE3100)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DLCID_OFFSET UNITYSDK_OFFSET(0x9FE3140)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x9FE3110)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE30C0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FE3160)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0x9FE30E0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9FE30B0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FE3130)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DLCID_OFFSET UNITYSDK_OFFSET(0x9FE3150)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE30D0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9FE3170)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0x9FE30F0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FE3180)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3270)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChessRogueRecordData_TypeDefinitionIndex = 52198;

	class PlayerChessRogueRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _RegularCabinetCnt_k__BackingField; // 0x10
		::System::UInt32 _MainStoryCount_k__BackingField; // 0x14
		::System::UInt32 _DlcID_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x1C
		::System::UInt32 _Difficulty_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_MainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_MainStoryCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_RegularCabinetCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET))(this);
		}

		::System::Void set_RegularCabinetCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET))(this, value);
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

		::System::Void set_Difficulty(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::UInt32 get_DlcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DLCID_OFFSET))(this);
		}

		::System::Void set_DlcID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DLCID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_4C5FA33230DE3480* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C5FA33230DE3480*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET))(this, info);
		}
	};
}
