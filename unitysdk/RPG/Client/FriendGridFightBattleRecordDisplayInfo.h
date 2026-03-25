#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_319;

#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x970CDC0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x970D2B0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x970D290)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x970D2C0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x970D2A0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x970D220)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0x970D230)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendGridFightBattleRecordDisplayInfo_TypeDefinitionIndex = 52163;

	class FriendGridFightBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x10
		::System::UInt32 _DivisionID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendGridFightBattleRecordDisplayInfo* Create(::Class_1_FA4F4A67B1C04320_319* serverInfo)
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::Class_1_FA4F4A67B1C04320_319*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(serverInfo);
		}

		::System::Void _Init(::Class_1_FA4F4A67B1C04320_319* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_319*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, serverInfo);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET))(this, value);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, value);
		}
	};
}
