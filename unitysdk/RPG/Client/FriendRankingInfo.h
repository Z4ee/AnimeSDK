#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F3622139E5E134C0_1_Enum_3_060898AA908AAA4E_12.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_639;
class Class_1_D17272E82AE804C2_641;
class Class_1_D17272E82AE804C2_642;
class Class_1_F3622139E5E134C0_1;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0xBA7AD30)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0xBA7ADB0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xBA7ABC0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0xBA7ABA0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xBA7ABD0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0xBA7ABB0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xBA7ABE0)
#define RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7B230)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 61999;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::System::String* _CachedRankIcon; // 0x10
		::Class_1_D17272E82AE804C2_641* MarbleCommonInfo; // 0x18
		::Class_1_D17272E82AE804C2_639* MatchThreeCommonInfo; // 0x20
		::Class_1_D17272E82AE804C2_642* DiceCombatCommonInfo; // 0x28
		::Class_1_F3622139E5E134C0_1_Enum_3_060898AA908AAA4E_12 InfoCase; // 0x30
		::System::UInt32 Rank; // 0x34
		::System::UInt32 _SyncTime_k__BackingField; // 0x38
		::System::UInt32 _Uid_k__BackingField; // 0x3C

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

		::System::Void Sync(::Class_1_F3622139E5E134C0_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, a1);
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
