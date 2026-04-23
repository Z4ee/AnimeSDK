#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_092355F7336672B8;
class Class_1_5A55E8BED8FA46A4_1;
namespace RPG::Client { class FateExpRewardLevelDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEEXPREWARDINFO_AREALLREWARDSCLAIMED_OFFSET UNITYSDK_OFFSET(0xA339F00)
#define RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET UNITYSDK_OFFSET(0xA338D70)
#define RPG_CLIENT_FATEEXPREWARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA339760)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0xA339B70)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETNEXTLEVELREQUIREDEXP_OFFSET UNITYSDK_OFFSET(0xA339820)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xA339990)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPREMAINDER_OFFSET UNITYSDK_OFFSET(0xA33A530)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPTOTAL_OFFSET UNITYSDK_OFFSET(0xA33A510)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVELDATALIST_OFFSET UNITYSDK_OFFSET(0xA33A540)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA33A520)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0xA33A550)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xA339BF0)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASPERMANENTCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xA339E00)
#define RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA338350)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET UNITYSDK_OFFSET(0xA33A150)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET UNITYSDK_OFFSET(0xA33A0A0)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISLEVELMAXED_OFFSET UNITYSDK_OFFSET(0xA3397D0)
#define RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0xA33A560)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xA3390E0)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3386C0)
#define RPG_CLIENT_FATEEXPREWARDINFO__CHECKDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA33A290)
#define RPG_CLIENT_FATEEXPREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA338340)

namespace RPG::Client
{
	inline static constexpr unsigned int FateExpRewardInfo_TypeDefinitionIndex = 58880;

	class FateExpRewardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>* _LevelDataList; // 0x10
		::System::UInt32 _ExpRemainder; // 0x18
		::System::UInt32 _MaxLevelPossible_k__BackingField; // 0x1C
		::System::UInt32 _ExpTotal; // 0x20
		::System::UInt32 _Level; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_5A55E8BED8FA46A4_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncUpdate(::Class_1_092355F7336672B8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_092355F7336672B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsLevelMaxed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISLEVELMAXED_OFFSET))(this);
		}

		::System::UInt32 GetNextLevelRequiredExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETNEXTLEVELREQUIREDEXP_OFFSET))(this);
		}

		::System::UInt32 GetRequiredExpOfLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET))(this, level);
		}

		::System::Single GetExpRatio(::System::UInt32 remainderExp, ::System::UInt32 level)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET))(this, remainderExp, level);
		}

		::System::Void CalcLevelAndRemainderExpByTotalExp(::System::UInt32 totalExp, ::System::UInt32& level, ::System::UInt32& remainderExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET))(this, totalExp, level, remainderExp);
		}

		::System::Boolean HasClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_HASCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean HasPermanentClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_HASPERMANENTCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean AreAllRewardsClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_AREALLREWARDSCLAIMED_OFFSET))(this);
		}

		::System::Boolean IsClaimablePermanent(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET))(this, level);
		}

		::System::Boolean IsClaimableLimitedTime(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET))(this, level);
		}

		::System::Boolean _CheckDataItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO__CHECKDATAITEMS_OFFSET))(this);
		}

		::System::UInt32 get_ExpTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPTOTAL_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ExpRemainder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPREMAINDER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>* get_LevelDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVELDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevelPossible()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_MAXLEVELPOSSIBLE_OFFSET))(this);
		}

		::System::Void set_MaxLevelPossible(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET))(this, value);
		}
	};
}
