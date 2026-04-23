#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE9B29BCEEDBFC4A_Enum_3_060898AA908AAA4E_12.h"
#include "unitysdk/System/Object.h"

class Class_1_CE9B29BCEEDBFC4A;
class Class_1_D17272E82AE804C2_626;
class Class_1_D17272E82AE804C2_628;
class Class_1_D17272E82AE804C2_629;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0xA3DC550)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0xA3DC5D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xA3DC3F0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0xA3DC3D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xA3DC400)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0xA3DC3E0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3DC410)
#define RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DCA50)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 61075;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_629* DiceCombatCommonInfo; // 0x10
		::Class_1_D17272E82AE804C2_626* MatchThreeCommonInfo; // 0x18
		::Class_1_D17272E82AE804C2_628* MarbleCommonInfo; // 0x20
		::System::String* _CachedRankIcon; // 0x28
		::System::UInt32 Rank; // 0x30
		::System::UInt32 _SyncTime_k__BackingField; // 0x34
		::Class_1_CE9B29BCEEDBFC4A_Enum_3_060898AA908AAA4E_12 InfoCase; // 0x38
		::System::UInt32 _Uid_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_SyncTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET))(this);
		}

		::System::Void set_SyncTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_CE9B29BCEEDBFC4A* protoInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE9B29BCEEDBFC4A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, protoInfo);
		}

		::System::UInt32 GetPvpScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET))(this);
		}

		::System::String* GetRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET))(this);
		}
	};
}
