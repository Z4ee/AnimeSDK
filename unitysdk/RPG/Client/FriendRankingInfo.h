#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A95CCE23053F94F_Enum_3_37EB127CD200B7DD_5.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_88;
class Class_1_5A95CCE23053F94F;
class Class_1_D17272E82AE804C2_727;
class Class_1_D17272E82AE804C2_729;
class Class_1_D17272E82AE804C2_730;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0x16D2DD50)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0x16D2DEB0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x16D2DBA0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x16D2DB80)
#define RPG_CLIENT_FRIENDRANKINGINFO_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x16D2DDE0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x16D2DBB0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x16D2DB90)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x16D2DBC0)
#define RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D2E370)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 63364;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_730* DiceCombatCommonInfo; // 0x10
		::Class_1_21C7581DFE99F091_88* TeamTowersCommonInfo; // 0x18
		::Class_1_D17272E82AE804C2_727* MatchThreeCommonInfo; // 0x20
		::System::String* _CachedRankIcon; // 0x28
		::Class_1_D17272E82AE804C2_729* MarbleCommonInfo; // 0x30
		::System::UInt32 Rank; // 0x38
		::Class_1_5A95CCE23053F94F_Enum_3_37EB127CD200B7DD_5 InfoCase; // 0x3C
		::System::UInt32 _Uid_k__BackingField; // 0x40
		::System::UInt32 _SyncTime_k__BackingField; // 0x44

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

		::System::Void Sync(::Class_1_5A95CCE23053F94F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A95CCE23053F94F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, a1);
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
