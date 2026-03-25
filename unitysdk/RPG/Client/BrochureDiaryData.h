#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_DBE1913405A6C120_2;
namespace RPG::Client { class BrochurePasterData; }
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BROCHUREDIARYDATA_ADDPASTER_OFFSET UNITYSDK_OFFSET(0x920D1C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x920C630)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETCURRENTPASTERIDS_OFFSET UNITYSDK_OFFSET(0x920D0A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETPASTERDATA_OFFSET UNITYSDK_OFFSET(0x920D0E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CANPASTE_OFFSET UNITYSDK_OFFSET(0x920D2D0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CHOICEGROUPROW_OFFSET UNITYSDK_OFFSET(0x920E630)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x920E6A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x920E810)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOICE_OFFSET UNITYSDK_OFFSET(0x920E6C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOSEN_OFFSET UNITYSDK_OFFSET(0x920E800)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x920E780)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x920E5A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x920E7E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x920E5E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_REWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x920E7A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x920E5C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0x920E7C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x920E610)
#define RPG_CLIENT_BROCHUREDIARYDATA_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0x920D130)
#define RPG_CLIENT_BROCHUREDIARYDATA_REMOVEPASTER_OFFSET UNITYSDK_OFFSET(0x920DEC0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x920E6B0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x920E5B0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x920E7F0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x920E5D0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0x920E7D0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x920C840)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x920CDC0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET UNITYSDK_OFFSET(0x920C8B0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEDESCSHOW_OFFSET UNITYSDK_OFFSET(0x920E0C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x920CE10)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTER_OFFSET UNITYSDK_OFFSET(0x920D350)
#define RPG_CLIENT_BROCHUREDIARYDATA__CANPASTERINTHISDIARY_OFFSET UNITYSDK_OFFSET(0x920E2A0)
#define RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x920C780)
#define RPG_CLIENT_BROCHUREDIARYDATA__SAFECREATEPASTERDATA_OFFSET UNITYSDK_OFFSET(0x920CF20)
#define RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET UNITYSDK_OFFSET(0x920C940)

namespace RPG::Client
{
	inline static constexpr unsigned int BrochureDiaryData_TypeDefinitionIndex = 55657;

	class BrochureDiaryData : public ::System::Object
	{
	public:
		::RPG::GameCore::TravelBrochureConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochurePasterData*>* _PasterDatas; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentPasterIDs; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _DescShowDetail_k__BackingField; // 0x2C
		::System::Boolean _IsUnlocked_k__BackingField; // 0x2D
		::System::UInt32 _SelectedChoiceID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BrochureDiaryData* Create(::System::UInt32 diaryID)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET))(diaryID);
		}

		::System::Void SyncAll(::Class_1_DBE1913405A6C120_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET))(this, info);
		}

		::System::Void SyncUnlocked(::System::Boolean unlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET))(this, unlocked);
		}

		::System::Void UpdateChoice(::Class_1_DBE1913405A6C120_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET))(this, info);
		}

		::System::Void UpdatePasterUniqueID(::Class_1_DBE1913405A6C120_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GETCURRENTPASTERIDS_OFFSET))(this);
		}

		::RPG::Client::BrochurePasterData* GetPasterData(::System::UInt32 pasterID)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GETPASTERDATA_OFFSET))(this, pasterID);
		}

		::System::Boolean IsPasterPasted(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_ISPASTERPASTED_OFFSET))(this, pasterID);
		}

		::System::Boolean AddPaster(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_ADDPASTER_OFFSET))(this, pasterID);
		}

		::System::Boolean UpdatePaster(::RPG::Client::BrochurePasterData* pasterData, ::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BrochurePasterData*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTER_OFFSET))(this, pasterData, rectTransform);
		}

		::System::Boolean RemovePaster(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_REMOVEPASTER_OFFSET))(this, pasterID);
		}

		::System::Void UpdateDescShow(::System::Boolean showDetail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEDESCSHOW_OFFSET))(this, showDetail);
		}

		::System::Boolean _SyncPaster(::Class_1_DBE1913405A6C120_2* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET))(this, info);
		}

		::RPG::Client::BrochurePasterData* _SafeCreatePasterData(::System::UInt32 pasterID)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__SAFECREATEPASTERDATA_OFFSET))(this, pasterID);
		}

		::System::Boolean _CanPasterInThisDiary(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__CANPASTERINTHISDIARY_OFFSET))(this, pasterID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::TravelBrochureConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TravelBrochureConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::TravelBrochureConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::TravelBrochureType get_Type()
		{
			return ((::RPG::GameCore::TravelBrochureType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::TravelBrochureDiaryGroupRow* get_ChoiceGroupRow()
		{
			return ((::RPG::GameCore::TravelBrochureDiaryGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_CHOICEGROUPROW_OFFSET))(this);
		}

		::System::Boolean get_DescShowDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_DESCSHOWDETAIL_OFFSET))(this);
		}

		::System::Void set_DescShowDetail(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_DESCSHOWDETAIL_OFFSET))(this, value);
		}

		::System::Boolean get_HasChoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOICE_OFFSET))(this);
		}

		::System::Boolean get_CanPaste()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_CANPASTE_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_HASREWARD_OFFSET))(this);
		}

		::System::UInt32 get_SelectedChoiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_SELECTEDCHOICEID_OFFSET))(this);
		}

		::System::Void set_SelectedChoiceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_SELECTEDCHOICEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_REWARDQUESTID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_HasChosen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOSEN_OFFSET))(this);
		}

		::System::Boolean get_HasAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_HASAVAILABLEREWARD_OFFSET))(this);
		}
	};
}
