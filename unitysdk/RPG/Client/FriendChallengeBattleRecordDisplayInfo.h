#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_64E52A323C80D766_2;
namespace RPG::Client { class PlayerChallengeTierceBriefRecord; }

#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xBA6A170)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBA6AEE0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xBA6AF40)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xBA6AF20)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xBA6AF00)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_TIERCEBRIEFRECORD_OFFSET UNITYSDK_OFFSET(0xBA6AF60)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBA6AEF0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xBA6AF50)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xBA6AF30)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xBA6AF10)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6A7F0)
#define RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0xBA6A840)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendChallengeBattleRecordDisplayInfo_TypeDefinitionIndex = 60042;

	class FriendChallengeBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::RPG::Client::PlayerChallengeTierceBriefRecord* _TierceBriefRecord_k__BackingField; // 0x10
		::RPG::Client::TextID _GroupName_k__BackingField; // 0x18
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x28
		::System::UInt32 _MaxLevelStarNum_k__BackingField; // 0x2C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendChallengeBattleRecordDisplayInfo* Create(::Class_1_64E52A323C80D766_2* a1)
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::Class_1_64E52A323C80D766_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::Class_1_64E52A323C80D766_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_64E52A323C80D766_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevelStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_MAXLEVELSTARNUM_OFFSET))(this);
		}

		::System::Void set_MaxLevelStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_MAXLEVELSTARNUM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_GROUPNAME_OFFSET))(this);
		}

		::System::Void set_GroupName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_SET_GROUPNAME_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerChallengeTierceBriefRecord* get_TierceBriefRecord()
		{
			return ((::RPG::Client::PlayerChallengeTierceBriefRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDCHALLENGEBATTLERECORDDISPLAYINFO_GET_TIERCEBRIEFRECORD_OFFSET))(this);
		}
	};
}
