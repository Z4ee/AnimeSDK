#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GETDISPLAYQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xC70A0A0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xC70A9B0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDRANKIDLIST_OFFSET UNITYSDK_OFFSET(0xC70A9D0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASQUESTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC70A9F0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC7043C0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC70A310)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xC70A9C0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDRANKIDLIST_OFFSET UNITYSDK_OFFSET(0xC70A9E0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC70AA50)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__ISQUESTHASREWARD_OFFSET UNITYSDK_OFFSET(0xC70A900)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHCHALLENGEREWARD_OFFSET UNITYSDK_OFFSET(0xC70A500)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHTRAINERQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xC70A370)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__UPDATEBYQUESTID_OFFSET UNITYSDK_OFFSET(0xC70A810)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideLevelRewardData_TypeDefinitionIndex = 62318;

	class AetherDivideLevelRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardRankIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardQuestIDList_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetDisplayQuestDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GETDISPLAYQUESTDATALIST_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Void _RefreshTrainerQuestReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHTRAINERQUESTREWARD_OFFSET))(this);
		}

		::System::Void _RefreshChallengeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHCHALLENGEREWARD_OFFSET))(this);
		}

		::System::Boolean _IsQuestHasReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__ISQUESTHASREWARD_OFFSET))(this, a1);
		}

		::System::Void _UpdateByQuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__UPDATEBYQUESTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeRewardQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDQUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeRewardQuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDQUESTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeRewardRankIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDRANKIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeRewardRankIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDRANKIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasQuestRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASQUESTREWARDCANTAKE_OFFSET))(this);
		}
	};
}
