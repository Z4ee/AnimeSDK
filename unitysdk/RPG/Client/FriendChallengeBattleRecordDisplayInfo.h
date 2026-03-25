#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_318;

#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x970CC40)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x970D1A0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x970D200)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x970D1E0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x970D1C0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x970D1B0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x970D210)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x970D1F0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x970D1D0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x970D0E0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0x970D0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendChallengeBattleRecordDisplayInfo_TypeDefinitionIndex = 52161;

	class FriendChallengeBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _MaxLevel_k__BackingField; // 0x10
		::System::UInt32 _MaxLevelStarNum_k__BackingField; // 0x14
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x18
		::RPG::Client::TextID _GroupName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendChallengeBattleRecordDisplayInfo* Create(::Class_1_FA4F4A67B1C04320_318* serverInfo)
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::Class_1_FA4F4A67B1C04320_318*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(serverInfo);
		}

		::System::Void _Init(::Class_1_FA4F4A67B1C04320_318* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_318*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, serverInfo);
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
