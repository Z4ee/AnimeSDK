#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9C1712509F1BA29_Enum_3_37EB127CD200B7DD_5.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_88;
class Class_1_D17272E82AE804C2_745;
class Class_1_D17272E82AE804C2_747;
class Class_1_D17272E82AE804C2_748;
class Class_1_D9C1712509F1BA29;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0xD0C09A0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0xD0C0B10)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xD0C07F0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0xD0C07D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xD0C0A50)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xD0C0800)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0xD0C07E0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD0C0810)
#define RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C1000)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 66349;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_745* MatchThreeCommonInfo; // 0x10
		::Class_1_D17272E82AE804C2_748* DiceCombatCommonInfo; // 0x18
		::System::String* _CachedRankIcon; // 0x20
		::Class_1_21C7581DFE99F091_88* TeamTowersCommonInfo; // 0x28
		::Class_1_D17272E82AE804C2_747* MarbleCommonInfo; // 0x30
		::System::UInt32 Rank; // 0x38
		::Class_1_D9C1712509F1BA29_Enum_3_37EB127CD200B7DD_5 InfoCase; // 0x3C
		::System::UInt32 _SyncTime_k__BackingField; // 0x40
		::System::UInt32 _Uid_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SyncTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET))(this);
		}

		::System::Void set_SyncTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D9C1712509F1BA29* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D9C1712509F1BA29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetPvpScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET))(this);
		}

		::System::Boolean IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_ISSETTLED_OFFSET))(this);
		}

		::System::String* GetRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET))(this);
		}
	};
}
