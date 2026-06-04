#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

class Class_1_10568D63349FDCA4;
class Class_1_99D87B66FA19BA63_5;
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class FriendChallengeBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendGridFightBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendRogueBattleRecordDisplayInfo; }
namespace System { class String; }

#define RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBA69FB0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xBA6A100)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xBA6A510)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xBA6A3D0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET UNITYSDK_OFFSET(0xBA6A0C0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xBA6A250)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBA6A030)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET UNITYSDK_OFFSET(0xBA6A650)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xBA6A580)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBA6A670)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xBA6A640)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xBA6A5F0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xBA6A5A0)
#define RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET UNITYSDK_OFFSET(0xBA6A070)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET UNITYSDK_OFFSET(0xBA6A660)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xBA6A590)
#define RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBA69EF0)
#define RPG_CLIENT_FRIENDBRIEFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA69EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendBriefData_TypeDefinitionIndex = 60045;

	class FriendBriefData : public ::System::Object
	{
	public:
		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* _GridFightBattleRecordDisplayInfo; // 0x10
		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* _ChallengeBattleRecordDisplayInfo; // 0x18
		::Class_1_99D87B66FA19BA63_5* _RowBattleRecordDisplayInfo; // 0x20
		::Proto::PlayerSimpleInfo* _RowPlayerInfo; // 0x28
		::RPG::Client::FriendRogueBattleRecordDisplayInfo* _RogueBattleRecordDisplayInfo; // 0x30
		::System::String* RemarkName; // 0x38
		::System::Int64 _AddTime_k__BackingField; // 0x40
		::Enum_3_0F1B992870941C13_1 _PlayingState; // 0x48
		::System::Boolean _IsMarked_k__BackingField; // 0x4C

		::System::Void _ctor(::Class_1_10568D63349FDCA4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FriendBriefData* Create(::Class_1_10568D63349FDCA4* a1)
		{
			return ((::RPG::Client::FriendBriefData*(*)(::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_10568D63349FDCA4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET))(this, a1);
		}

		::Proto::PlayerSimpleInfo* GetRowPlayerInfo()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET))(this);
		}

		::System::Void SetIsMarked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET))(this, a1);
		}

		::Enum_3_0F1B992870941C13_1 GetPlayingState()
		{
			return ((::Enum_3_0F1B992870941C13_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET))(this);
		}

		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* GetChallengeBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendRogueBattleRecordDisplayInfo* GetRogueBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendRogueBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* GetGridFightBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Void set_IsMarked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_PS_AccountID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET))(this);
		}

		::System::Boolean get_IsShowBattleRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET))(this);
		}

		::System::Int64 get_AddTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET))(this);
		}

		::System::Void set_AddTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISNEW_OFFSET))(this);
		}
	};
}
