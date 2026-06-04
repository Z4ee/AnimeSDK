#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_341;

#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xBA6A440)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBA6B000)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xBA6AFE0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBA6B010)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xBA6AFF0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6AF70)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0xBA6AF80)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendGridFightBattleRecordDisplayInfo_TypeDefinitionIndex = 60044;

	class FriendGridFightBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionID_k__BackingField; // 0x10
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendGridFightBattleRecordDisplayInfo* Create(::Class_1_D17272E82AE804C2_341* a1)
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::Class_1_D17272E82AE804C2_341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::Class_1_D17272E82AE804C2_341* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, a1);
		}
	};
}
