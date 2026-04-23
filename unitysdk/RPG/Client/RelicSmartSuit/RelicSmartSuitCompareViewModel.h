#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81595715048249D2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareMoreChoicePanel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitComparePinOperator; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareSelectInfo; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xAFB37A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET UNITYSDK_OFFSET(0xAFB3E10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET UNITYSDK_OFFSET(0xAFB3E50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xAFB3650)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0xAFB36E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISSELFPLAN_OFFSET UNITYSDK_OFFSET(0xAFB3780)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_MORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xAFB3740)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PINOPERATOR_OFFSET UNITYSDK_OFFSET(0xAFB3760)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xAFB3700)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_RELICINFOLIST_OFFSET UNITYSDK_OFFSET(0xAFB3000)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xAFB3720)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISINPLANRESULT_OFFSET UNITYSDK_OFFSET(0xAFB4120)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET UNITYSDK_OFFSET(0xAFB4010)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xAFB2C50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETPLANRESULT_OFFSET UNITYSDK_OFFSET(0xAFB3B00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0xAFB36F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISSELFPLAN_OFFSET UNITYSDK_OFFSET(0xAFB3790)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_MORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xAFB3750)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PINOPERATOR_OFFSET UNITYSDK_OFFSET(0xAFB3770)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xAFB3710)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xAFB3730)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB3890)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETSELFPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFB3D00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET UNITYSDK_OFFSET(0xAFB39F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xAFB38E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAFB3FC0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareViewModel_TypeDefinitionIndex = 68669;

	class RelicSmartSuitCompareViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _FocusedRelicInfos; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* _SelectInfo_k__BackingField; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _PlanResult_k__BackingField; // 0x20
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* _MoreChoicePanel_k__BackingField; // 0x28
		::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* _PinOperator_k__BackingField; // 0x30
		::Class_1_81595715048249D2* _DataSource_k__BackingField; // 0x38
		::System::Boolean _IsSelfPlan_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_1_81595715048249D2* get_DataSource()
		{
			return ((::Class_1_81595715048249D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_DATASOURCE_OFFSET))(this);
		}

		::System::Void set_DataSource(::Class_1_81595715048249D2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81595715048249D2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_DATASOURCE_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_PlanResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PLANRESULT_OFFSET))(this);
		}

		::System::Void set_PlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PLANRESULT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* get_RelicInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_RELICINFOLIST_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTINFO_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* get_MoreChoicePanel()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_MORECHOICEPANEL_OFFSET))(this);
		}

		::System::Void set_MoreChoicePanel(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_MORECHOICEPANEL_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* get_PinOperator()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PINOPERATOR_OFFSET))(this);
		}

		::System::Void set_PinOperator(::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PINOPERATOR_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelfPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISSELFPLAN_OFFSET))(this);
		}

		::System::Void set_IsSelfPlan(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISSELFPLAN_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* Create(::System::Int32 index, ::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*(*)(::System::Int32, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET))(index, avatar, planData, planResult);
		}

		::System::Void _Init(::System::Int32 index, ::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INIT_OFFSET))(this, index, avatar, planData, planResult);
		}

		::System::Void _InitDataSource(::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET))(this, avatar, planData);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _GetSelfPlanData(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETSELFPLANDATA_OFFSET))(this, avatar);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET))(this);
		}

		::System::Void FlipPage(::System::Boolean toLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET))(this, toLeft);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* GetFocusedRelicInfo(::System::Int32 index)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET))(this, index);
		}

		::System::Void SetFocusedRelicInfo(::System::Int32 index, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* relicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETFOCUSEDRELICINFO_OFFSET))(this, index, relicInfo);
		}

		::System::Boolean IsSelectedRelicPinned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET))(this);
		}

		::System::Boolean IsInPlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* relicInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISINPLANRESULT_OFFSET))(this, relicInfo);
		}

		::System::Void SetPlanResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETPLANRESULT_OFFSET))(this, planResult);
		}

		::System::Void _NotifyRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYREFRESHVIEW_OFFSET))(this);
		}
	};
}
