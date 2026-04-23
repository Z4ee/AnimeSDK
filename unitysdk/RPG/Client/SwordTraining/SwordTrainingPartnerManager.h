#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_931;
namespace RPG::Client { class SwordTrainingPartnerData; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::GameCore { class SwordTrainingPartnerAbilityRow; }
namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_CLEARSELECTEDPARTERABILITYDATA_OFFSET UNITYSDK_OFFSET(0xB247CF0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB249A40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETABILITYROW_OFFSET UNITYSDK_OFFSET(0xB24A550)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETCANSELECTABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB24A460)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERABILITYIDLIST_OFFSET UNITYSDK_OFFSET(0xB247AF0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYABILITYID_OFFSET UNITYSDK_OFFSET(0xB249400)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYPARTNERID_OFFSET UNITYSDK_OFFSET(0xB24A4A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATALIST_OFFSET UNITYSDK_OFFSET(0xB24A3E0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETSELECTEDPARTNERABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB2476B0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CANSELECTABILITYCOUNT_OFFSET UNITYSDK_OFFSET(0xB24A5F0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURASSISTPARTNERDATA_OFFSET UNITYSDK_OFFSET(0xB24A8B0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERABILITYID_OFFSET UNITYSDK_OFFSET(0xB24A760)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERICONPATH_OFFSET UNITYSDK_OFFSET(0xB24AA00)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURSELECTABILITYDATA_OFFSET UNITYSDK_OFFSET(0xB24A830)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_NEEDSELECTPARTNERABILITY_OFFSET UNITYSDK_OFFSET(0xB24A900)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB249660)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB24A270)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATA_OFFSET UNITYSDK_OFFSET(0xB24A150)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SYNCAVAILABLEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xB249B20)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CREATEPARNERDATA_OFFSET UNITYSDK_OFFSET(0xB249990)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB24AAA0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingPartnerManager_TypeDefinitionIndex = 69123;

	class SwordTrainingPartnerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AbilityToPartnerIDMap; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* _AvailablePartnerAbilityList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>* _AllPartners; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* _SelectedPartnerAbilityDataList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAvailableAbilityList(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_931*>* candidateAbilityIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_931*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SYNCAVAILABLEABILITYLIST_OFFSET))(this, candidateAbilityIDList);
		}

		::System::Void SetSelectedParterAbilityData(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATA_OFFSET))(this, data);
		}

		::System::Void SetSelectedParterAbilityDataList(::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* abilityDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATALIST_OFFSET))(this, abilityDataList);
		}

		::System::Void ClearSelectedParterAbilityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_CLEARSELECTEDPARTERABILITYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>* GetPartnerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* GetCanSelectAbilityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETCANSELECTABILITYDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* GetSelectedPartnerAbilityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETSELECTEDPARTNERABILITYDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPartnerAbilityIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERABILITYIDLIST_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPartnerData* GetPartnerDataByAbilityID(::System::UInt32 abilityID)
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYABILITYID_OFFSET))(this, abilityID);
		}

		::RPG::Client::SwordTrainingPartnerData* GetPartnerDataByPartnerID(::System::UInt32 partnerID)
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYPARTNERID_OFFSET))(this, partnerID);
		}

		::RPG::GameCore::SwordTrainingPartnerAbilityRow* GetAbilityRow(::System::UInt32 abilityID)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerAbilityRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETABILITYROW_OFFSET))(this, abilityID);
		}

		::System::Void _CreateParnerData(::RPG::GameCore::SwordTrainingPartnerRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CREATEPARNERDATA_OFFSET))(this, row);
		}

		::System::UInt32 get_CanSelectAbilityCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CANSELECTABILITYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurPartnerAbilityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERABILITYID_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPartnerData* get_CurAssistPartnerData()
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURASSISTPARTNERDATA_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* get_CurSelectAbilityData()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURSELECTABILITYDATA_OFFSET))(this);
		}

		::System::Boolean get_NeedSelectPartnerAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_NEEDSELECTPARTNERABILITY_OFFSET))(this);
		}

		::System::String* get_CurPartnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERICONPATH_OFFSET))(this);
		}
	};
}
