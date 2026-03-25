#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_298D0CA04EC975E4_1;
class Class_1_A2C3097235CA38AC;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace RPG::Client { template <typename T> class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1; }
namespace RPG::GameCore { class RogueTournWeeklyChallengeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3E7F80)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA3E8650)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0xA3E8F00)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0xA3E8A20)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLPERSONASTYLEDATA_OFFSET UNITYSDK_OFFSET(0xA3E9660)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLTITANBLESSDATA_OFFSET UNITYSDK_OFFSET(0xA3E92B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTDETAILTEXT_OFFSET UNITYSDK_OFFSET(0xA3E8600)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xA3E85B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xA3E9AA0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA3E9A10)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0xA3EAF40)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA3EAF60)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA3EAE50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3EAF80)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xA3EAFA0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3EAE70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA3E8490)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA3E9CA0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SETCURWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0xA3E9D50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0xA3EAF50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA3EAF70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA3EAE60)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3EAF90)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xA3EAFB0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3E8160)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0xA3EAB00)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E7F70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0xA3EA6C0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA3EA520)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET UNITYSDK_OFFSET(0xA3EA0B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0xA3EA860)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET UNITYSDK_OFFSET(0xA3E9E50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA3E84F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_TypeDefinitionIndex = 55380;

	class RogueTournWeekChallengeData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DetailMonsterDataListsCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* _CachedDetailMonsterDataListsRetValue; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*>* _DetailMonsterDataLists; // 0x18
		::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1<::RPG::Client::MonsterData*>* _DisplayMonsterDataList; // 0x20
		::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>* _ContentDetails; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CurWeekRewardItems_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>* _Contents; // 0x38
		::System::UInt32 _CurWeekChallengeID_k__BackingField; // 0x40
		::System::UInt32 _CurWeekChallengeEndTimeStamp_k__BackingField; // 0x44
		::System::Boolean _IsCurWeekRewardFinished_k__BackingField; // 0x48
		::System::UInt32 _CurWeekAddedExtraTournExp_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_298D0CA04EC975E4_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_298D0CA04EC975E4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::String* GetContentText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTTEXT_OFFSET))(this);
		}

		::System::String* GetContentDetailText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTDETAILTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetContentAllBuffData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLBUFFDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* GetContentAllMiracleData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLMIRACLEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetContentAllFormulaData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLFORMULADATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetContentAllTitanBlessData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLTITANBLESSDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* GetContentAllPersonaStyleData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLPERSONASTYLEDATA_OFFSET))(this);
		}

		::RPG::Client::MonsterData* GetDisplayMonsterData(::System::UInt32 diffCompLevel)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET))(this, diffCompLevel);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* GetDetailMonsterDataList(::System::UInt32 diffCompLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET))(this, diffCompLevel);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Void SetCurWeekChallengeSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SETCURWEEKCHALLENGESEEN_OFFSET))(this);
		}

		::System::Void _PrepareMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREMONSTERDATA_OFFSET))(this);
		}

		::System::Void _PrepareFinalMonsterDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* finalMonsterGroups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET))(this, finalMonsterGroups);
		}

		::RPG::Client::MonsterData* _GetFinalMonsterData(::System::UInt32 finalMonsterGroup)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET))(this, finalMonsterGroup);
		}

		::System::Void _PrepareDetailMonsterDataListDicts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET))(this);
		}

		::System::Void _PrepareDisplayMonsterDataListDictByMonsterGroup(::System::Int32 targetListIndex, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* monsterGroups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET))(this, targetListIndex, monsterGroups);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _GetDisplayMonsterDataListByMonsterGroup(::System::UInt32 monsterGroup)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET))(this, monsterGroup);
		}

		::System::Void _AddDisplayMonsterDataListByRogueMonsterID(::System::UInt32 rogueMonsterID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* ret, ::System::Collections::Generic::HashSet_1<::System::UInt32>* distinctIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET))(this, rogueMonsterID, ret, distinctIDs);
		}

		::System::UInt32 get_CurWeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CurWeekAddedExtraTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this);
		}

		::System::Void set_CurWeekAddedExtraTournExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_CurWeekChallengeEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeEndTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_CurWeekRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_CurWeekRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurWeekRewardFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurWeekRewardFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournWeeklyChallengeRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournWeeklyChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
