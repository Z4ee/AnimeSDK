#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_327;

#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA3CCFC0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xA3CD520)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xA3CD580)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xA3CD560)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA3CD540)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xA3CD530)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xA3CD590)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xA3CD570)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA3CD550)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CD460)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0xA3CD470)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendChallengeBattleRecordDisplayInfo_TypeDefinitionIndex = 59112;

	class FriendChallengeBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _MaxLevel_k__BackingField; // 0x10
		::RPG::Client::TextID _GroupName_k__BackingField; // 0x18
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x28
		::System::UInt32 _MaxLevelStarNum_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendChallengeBattleRecordDisplayInfo* Create(::Class_1_D17272E82AE804C2_327* serverInfo)
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::Class_1_D17272E82AE804C2_327*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(serverInfo);
		}

		::System::Void _Init(::Class_1_D17272E82AE804C2_327* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_327*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, serverInfo);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevelStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVELSTARNUM_OFFSET))(this);
		}

		::System::Void set_MaxLevelStarNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVELSTARNUM_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_GROUPNAME_OFFSET))(this);
		}

		::System::Void set_GroupName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_GROUPNAME_OFFSET))(this, value);
		}
	};
}
