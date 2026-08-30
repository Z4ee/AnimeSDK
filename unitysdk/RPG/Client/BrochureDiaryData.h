#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_193118482ED63753;
namespace RPG::Client { class BrochurePasterData; }
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BROCHUREDIARYDATA_ADDPASTER_OFFSET UNITYSDK_OFFSET(0xC979C40)
#define RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC978E80)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETCURRENTPASTERIDS_OFFSET UNITYSDK_OFFSET(0xC979AA0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GETPASTERDATA_OFFSET UNITYSDK_OFFSET(0xC979AE0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CANPASTE_OFFSET UNITYSDK_OFFSET(0xC979E00)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_CHOICEGROUPROW_OFFSET UNITYSDK_OFFSET(0xC97B450)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xC97B4C0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xC97B700)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOICE_OFFSET UNITYSDK_OFFSET(0xC97B4E0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASCHOSEN_OFFSET UNITYSDK_OFFSET(0xC97B6B0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xC97B5A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC97B350)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC97B690)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC97B390)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_REWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xC97B620)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC97B370)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0xC97B670)
#define RPG_CLIENT_BROCHUREDIARYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC97B400)
#define RPG_CLIENT_BROCHUREDIARYDATA_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0xC979B30)
#define RPG_CLIENT_BROCHUREDIARYDATA_REMOVEPASTER_OFFSET UNITYSDK_OFFSET(0xC97AB10)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_DESCSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xC97B4D0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC97B360)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC97B6A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC97B380)
#define RPG_CLIENT_BROCHUREDIARYDATA_SET_SELECTEDCHOICEID_OFFSET UNITYSDK_OFFSET(0xC97B680)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC9790A0)
#define RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC9797F0)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET UNITYSDK_OFFSET(0xC979110)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEDESCSHOW_OFFSET UNITYSDK_OFFSET(0xC97AD50)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC979840)
#define RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTER_OFFSET UNITYSDK_OFFSET(0xC979EC0)
#define RPG_CLIENT_BROCHUREDIARYDATA__CANPASTERINTHISDIARY_OFFSET UNITYSDK_OFFSET(0xC97B000)
#define RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC978FD0)
#define RPG_CLIENT_BROCHUREDIARYDATA__SAFECREATEPASTERDATA_OFFSET UNITYSDK_OFFSET(0xC979960)
#define RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET UNITYSDK_OFFSET(0xC9791A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BrochureDiaryData_TypeDefinitionIndex = 68171;

	class BrochureDiaryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochurePasterData*>* _PasterDatas; // 0x10
		::RPG::GameCore::TravelBrochureConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentPasterIDs; // 0x20
		::System::Boolean _DescShowDetail_k__BackingField; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x29
		::System::UInt32 _SelectedChoiceID_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BrochureDiaryData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncAll(::Class_1_193118482ED63753* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_193118482ED63753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateChoice(::Class_1_193118482ED63753* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_193118482ED63753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATECHOICE_OFFSET))(this, a1);
		}

		::System::Void UpdatePasterUniqueID(::Class_1_193118482ED63753* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_193118482ED63753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA_UPDATEPASTERUNIQUEID_OFFSET))(this, a1);
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

		::System::Boolean _SyncPaster(::Class_1_193118482ED63753* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_193118482ED63753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREDIARYDATA__SYNCPASTER_OFFSET))(this, a1);
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
