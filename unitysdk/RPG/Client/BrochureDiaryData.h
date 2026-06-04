#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA_2;
namespace RPG::Client { class BrochurePasterData; }
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BROCHUREDIARYDATA_ADDPASTER_OFFSET UNITYSDK_OFFSET(0xB4526E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB451930)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETCURRENTPASTERIDS_OFFSET UNITYSDK_OFFSET(0xB452540)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETPASTERDATA_OFFSET UNITYSDK_OFFSET(0xB452580)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CANPASTE_OFFSET UNITYSDK_OFFSET(0xB452850)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CHOICEGROUPROW_OFFSET UNITYSDK_OFFSET(0xB453C60)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xB453CD0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB453E40)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOICE_OFFSET UNITYSDK_OFFSET(0xB453CF0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOSEN_OFFSET UNITYSDK_OFFSET(0xB453E30)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xB453DB0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB453BD0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB453E10)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB453C10)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_REWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB453DD0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB453BF0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0xB453DF0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB453C40)
#define RPG_CLIENT_BROCHUREDIARYDATA_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0xB4525D0)
#define RPG_CLIENT_BROCHUREDIARYDATA_REMOVEPASTER_OFFSET UNITYSDK_OFFSET(0xB4534E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xB453CE0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB453BE0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB453E20)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB453C00)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0xB453E00)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0xB451B40)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB452290)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET UNITYSDK_OFFSET(0xB451BB0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEDESCSHOW_OFFSET UNITYSDK_OFFSET(0xB4536A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xB4522E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTER_OFFSET UNITYSDK_OFFSET(0xB4528D0)
#define RPG_CLIENT_BROCHUREDIARYDATA__CANPASTERINTHISDIARY_OFFSET UNITYSDK_OFFSET(0xB453880)
#define RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB451A80)
#define RPG_CLIENT_BROCHUREDIARYDATA__SAFECREATEPASTERDATA_OFFSET UNITYSDK_OFFSET(0xB452400)
#define RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET UNITYSDK_OFFSET(0xB451C40)

namespace RPG::Client
{
	inline static constexpr unsigned int BrochureDiaryData_TypeDefinitionIndex = 63795;

	class BrochureDiaryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentPasterIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochurePasterData*>* _PasterDatas; // 0x18
		::RPG::GameCore::TravelBrochureConfigRow* _Row_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _DescShowDetail_k__BackingField; // 0x2C
		::System::Boolean _IsUnlocked_k__BackingField; // 0x2D
		::System::UInt32 _SelectedChoiceID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BrochureDiaryData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncAll(::Class_1_2E64892306548DEA_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateChoice(::Class_1_2E64892306548DEA_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET))(this, a1);
		}

		::System::Void UpdatePasterUniqueID(::Class_1_2E64892306548DEA_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GETCURRENTPASTERIDS_OFFSET))(this);
		}

		::RPG::Client::BrochurePasterData* GetPasterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GETPASTERDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsPasterPasted(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_ISPASTERPASTED_OFFSET))(this, a1);
		}

		::System::Boolean AddPaster(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_ADDPASTER_OFFSET))(this, a1);
		}

		::System::Boolean UpdatePaster(::RPG::Client::BrochurePasterData* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BrochurePasterData*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemovePaster(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_REMOVEPASTER_OFFSET))(this, a1);
		}

		::System::Void UpdateDescShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEDESCSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _SyncPaster(::Class_1_2E64892306548DEA_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2E64892306548DEA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET))(this, a1);
		}

		::RPG::Client::BrochurePasterData* _SafeCreatePasterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__SAFECREATEPASTERDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CanPasterInThisDiary(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__CANPASTERINTHISDIARY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TravelBrochureConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TravelBrochureConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::TravelBrochureConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ROW_OFFSET))(this, a1);
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

		::System::Void set_DescShowDetail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_DESCSHOWDETAIL_OFFSET))(this, a1);
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

		::System::Void set_SelectedChoiceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_SELECTEDCHOICEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_REWARDQUESTID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
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
