#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F381659723E3F143_1_Enum_3_060898AA908AAA4E_11.h"
#include "unitysdk/System/Object.h"

class Class_1_F381659723E3F143_1;
class Class_1_FA4F4A67B1C04320_593;
class Class_1_FA4F4A67B1C04320_595;
class Class_1_FA4F4A67B1C04320_596;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0x971B950)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0x971B9D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x971B7F0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x971B7D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x971B800)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x971B7E0)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x971B810)
#define RPG_CLIENT_FRIENDRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x971BE40)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 53930;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_593* MatchThreeCommonInfo; // 0x10
		::Class_1_FA4F4A67B1C04320_595* MarbleCommonInfo; // 0x18
		::Class_1_FA4F4A67B1C04320_596* DiceCombatCommonInfo; // 0x20
		::System::String* _CachedRankIcon; // 0x28
		::System::UInt32 _Uid_k__BackingField; // 0x30
		::System::UInt32 Rank; // 0x34
		::System::UInt32 _SyncTime_k__BackingField; // 0x38
		::Class_1_F381659723E3F143_1_Enum_3_060898AA908AAA4E_11 InfoCase; // 0x3C

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

		::System::Void Sync(::Class_1_F381659723E3F143_1* protoInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, protoInfo);
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
