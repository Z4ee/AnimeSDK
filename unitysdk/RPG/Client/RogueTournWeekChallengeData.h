#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_296161B9D78FDA84_1;
class Class_1_820C30D315519AFE;
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

#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC873EE0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC8745A0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0xC874EF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0xC8749B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLPERSONASTYLEDATA_OFFSET UNITYSDK_OFFSET(0xC8756D0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLTITANBLESSDATA_OFFSET UNITYSDK_OFFSET(0xC8752E0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTDETAILTEXT_OFFSET UNITYSDK_OFFSET(0xC874550)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xC874500)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xC875B50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC875AC0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0xC876FE0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC877000)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC876EE0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC877020)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xC877040)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC876F00)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC8743E0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xC875DC0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SETCURWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0xC875E70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0xC876FF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC877010)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC876EF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC877030)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xC877050)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC8740B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0xC876B70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC873ED0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0xC8767A0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC876620)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET UNITYSDK_OFFSET(0xC876130)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0xC876940)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET UNITYSDK_OFFSET(0xC875F70)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC874440)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_TypeDefinitionIndex = 63504;

	class RogueTournWeekChallengeData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DetailMonsterDataListsCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CurWeekRewardItems_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* _CachedDetailMonsterDataListsRetValue; // 0x18
		::System::Collections::Generic::List_1<::Class_1_820C30D315519AFE*>* _ContentDetails; // 0x20
		::System::Collections::Generic::List_1<::Class_1_820C30D315519AFE*>* _Contents; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*>* _DetailMonsterDataLists; // 0x30
		::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1<::RPG::Client::MonsterData*>* _DisplayMonsterDataList; // 0x38
		::System::UInt32 _CurWeekChallengeEndTimeStamp_k__BackingField; // 0x40
		::System::UInt32 _CurWeekChallengeID_k__BackingField; // 0x44
		::System::UInt32 _CurWeekAddedExtraTournExp_k__BackingField; // 0x48
		::System::Boolean _IsCurWeekRewardFinished_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_296161B9D78FDA84_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296161B9D78FDA84_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET))(this, a1);
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

		::RPG::Client::MonsterData* GetDisplayMonsterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* GetDetailMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET))(this, a1);
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

		::System::Void _PrepareFinalMonsterDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* _GetFinalMonsterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Void _PrepareDetailMonsterDataListDicts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET))(this);
		}

		::System::Void _PrepareDisplayMonsterDataListDictByMonsterGroup(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _GetDisplayMonsterDataListByMonsterGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET))(this, a1);
		}

		::System::Void _AddDisplayMonsterDataListByRogueMonsterID(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_CurWeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CurWeekAddedExtraTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this);
		}

		::System::Void set_CurWeekAddedExtraTournExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurWeekChallengeEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeEndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_CurWeekRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_CurWeekRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurWeekRewardFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurWeekRewardFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournWeeklyChallengeRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournWeeklyChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
