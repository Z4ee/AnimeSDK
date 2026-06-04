#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_092355F7336672B8;
class Class_1_5A55E8BED8FA46A4_1;
namespace RPG::Client { class FateExpRewardLevelDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEEXPREWARDINFO_AREALLREWARDSCLAIMED_OFFSET UNITYSDK_OFFSET(0xB98B440)
#define RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET UNITYSDK_OFFSET(0xB98A4C0)
#define RPG_CLIENT_FATEEXPREWARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB98AEF0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0xB98B300)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETNEXTLEVELREQUIREDEXP_OFFSET UNITYSDK_OFFSET(0xB98AFD0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xB98B130)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPREMAINDER_OFFSET UNITYSDK_OFFSET(0xB98BC00)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPTOTAL_OFFSET UNITYSDK_OFFSET(0xB98BBE0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVELDATALIST_OFFSET UNITYSDK_OFFSET(0xB98BC10)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB98BBF0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0xB98BC20)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB97C4C0)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASPERMANENTCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB97C790)
#define RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB9899C0)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET UNITYSDK_OFFSET(0xB98B7F0)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET UNITYSDK_OFFSET(0xB98B750)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISLEVELMAXED_OFFSET UNITYSDK_OFFSET(0xB98AF80)
#define RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0xB98BC30)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xB98A850)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB989E10)
#define RPG_CLIENT_FATEEXPREWARDINFO__CHECKDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB98B920)
#define RPG_CLIENT_FATEEXPREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9899B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateExpRewardInfo_TypeDefinitionIndex = 59810;

	class FateExpRewardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>* _LevelDataList; // 0x10
		::System::UInt32 _Level; // 0x18
		::System::UInt32 _ExpTotal; // 0x1C
		::System::UInt32 _MaxLevelPossible_k__BackingField; // 0x20
		::System::UInt32 _ExpRemainder; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_5A55E8BED8FA46A4_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::Class_1_092355F7336672B8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_092355F7336672B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET))(this, a1);
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

		::System::UInt32 GetRequiredExpOfLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET))(this, a1);
		}

		::System::Single GetExpRatio(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET))(this, a1, a2);
		}

		::System::Void CalcLevelAndRemainderExpByTotalExp(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean IsClaimablePermanent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET))(this, a1);
		}

		::System::Boolean IsClaimableLimitedTime(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET))(this, a1);
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

		::System::Void set_MaxLevelPossible(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET))(this, a1);
		}
	};
}
