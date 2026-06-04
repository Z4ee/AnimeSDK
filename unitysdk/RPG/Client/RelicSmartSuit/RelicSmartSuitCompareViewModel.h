#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D11FF2E4C51BF3B1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareMoreChoicePanel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitComparePinOperator; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareSelectInfo; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC6FB4D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET UNITYSDK_OFFSET(0xC6FBB30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET UNITYSDK_OFFSET(0xC6FBB70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xC6FB390)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0xC6FB410)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISSELFPLAN_OFFSET UNITYSDK_OFFSET(0xC6FB4B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_MORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xC6FB470)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PINOPERATOR_OFFSET UNITYSDK_OFFSET(0xC6FB490)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xC6FB430)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_RELICINFOLIST_OFFSET UNITYSDK_OFFSET(0xC6FADF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xC6FB450)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISINPLANRESULT_OFFSET UNITYSDK_OFFSET(0xC6FBE40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET UNITYSDK_OFFSET(0xC6FBD30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xC6FAB00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETPLANRESULT_OFFSET UNITYSDK_OFFSET(0xC6FB830)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0xC6FB420)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISSELFPLAN_OFFSET UNITYSDK_OFFSET(0xC6FB4C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_MORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xC6FB480)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PINOPERATOR_OFFSET UNITYSDK_OFFSET(0xC6FB4A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xC6FB440)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xC6FB460)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FB5C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETSELFPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6FBA20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET UNITYSDK_OFFSET(0xC6FB720)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xC6FB610)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC6FBCE0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareViewModel_TypeDefinitionIndex = 69481;

	class RelicSmartSuitCompareViewModel : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* _MoreChoicePanel_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _FocusedRelicInfos; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* _PinOperator_k__BackingField; // 0x20
		::Class_1_D11FF2E4C51BF3B1* _DataSource_k__BackingField; // 0x28
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* _SelectInfo_k__BackingField; // 0x30
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _PlanResult_k__BackingField; // 0x38
		::System::Boolean _IsSelfPlan_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_1_D11FF2E4C51BF3B1* get_DataSource()
		{
			return ((::Class_1_D11FF2E4C51BF3B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_DATASOURCE_OFFSET))(this);
		}

		::System::Void set_DataSource(::Class_1_D11FF2E4C51BF3B1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D11FF2E4C51BF3B1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_DATASOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_PlanResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PLANRESULT_OFFSET))(this);
		}

		::System::Void set_PlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PLANRESULT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* get_RelicInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_RELICINFOLIST_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* get_MoreChoicePanel()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_MORECHOICEPANEL_OFFSET))(this);
		}

		::System::Void set_MoreChoicePanel(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_MORECHOICEPANEL_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* get_PinOperator()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PINOPERATOR_OFFSET))(this);
		}

		::System::Void set_PinOperator(::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PINOPERATOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelfPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISSELFPLAN_OFFSET))(this);
		}

		::System::Void set_IsSelfPlan(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISSELFPLAN_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* Create(::System::Int32 a1, ::RPG::AvatarSystem::IAvatar* a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a3, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a4)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*(*)(::System::Int32, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _Init(::System::Int32 a1, ::RPG::AvatarSystem::IAvatar* a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a3, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _InitDataSource(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _GetSelfPlanData(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETSELFPLANDATA_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET))(this);
		}

		::System::Void FlipPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* GetFocusedRelicInfo(::System::Int32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET))(this, a1);
		}

		::System::Void SetFocusedRelicInfo(::System::Int32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETFOCUSEDRELICINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsSelectedRelicPinned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET))(this);
		}

		::System::Boolean IsInPlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISINPLANRESULT_OFFSET))(this, a1);
		}

		::System::Void SetPlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETPLANRESULT_OFFSET))(this, a1);
		}

		::System::Void _NotifyRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYREFRESHVIEW_OFFSET))(this);
		}
	};
}
