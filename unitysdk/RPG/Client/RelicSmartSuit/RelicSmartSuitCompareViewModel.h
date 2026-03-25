#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PinOperationSourceType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_045F75CAE3CBF38C;
class Class_1_81595715048249D2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CONFIRMSELECTMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B8630)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2B68D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA2B6ED0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET UNITYSDK_OFFSET(0xA2B70D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2B74C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETRELICRESULTINFOS_OFFSET UNITYSDK_OFFSET(0xA2B8010)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURINDEX_OFFSET UNITYSDK_OFFSET(0xA2B6690)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2B67B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURRELICTYPE_OFFSET UNITYSDK_OFFSET(0xA2B66B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISMORECHOICESHOW_OFFSET UNITYSDK_OFFSET(0xA2B6870)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_LASTPAGESELECTEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2B6890)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xA2B6590)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xA2B65F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PREINDEX_OFFSET UNITYSDK_OFFSET(0xA2B6670)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_RELICINFOLIST_OFFSET UNITYSDK_OFFSET(0xA2B6610)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTEDRELICINFOINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B68B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_HIDEMORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xA2B7E20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISINPLANRESULT_OFFSET UNITYSDK_OFFSET(0xA2B8C70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISPINNED_OFFSET UNITYSDK_OFFSET(0xA2B73F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET UNITYSDK_OFFSET(0xA2B7F40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_PINORUNPINRELIC_OFFSET UNITYSDK_OFFSET(0xA2B7550)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SELECTRELICINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B8470)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SETPLANRESULT_OFFSET UNITYSDK_OFFSET(0xA2B6BF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_CURINDEX_OFFSET UNITYSDK_OFFSET(0xA2B66A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISMORECHOICESHOW_OFFSET UNITYSDK_OFFSET(0xA2B6880)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_LASTPAGESELECTEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2B68A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xA2B6600)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PREINDEX_OFFSET UNITYSDK_OFFSET(0xA2B6680)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTEDRELICINFOINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B68C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SHOWMORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xA2B7DE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0xA2B6F10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CLEARCACHEDRELICRESULTINFOSBYRELICTYPE_OFFSET UNITYSDK_OFFSET(0xA2B6FB0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B6A40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETCLONEPINDATA_OFFSET UNITYSDK_OFFSET(0xA2B86A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETORCREATERELICRESULTINFOS_OFFSET UNITYSDK_OFFSET(0xA2B81C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET UNITYSDK_OFFSET(0xA2B6B00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITPINCHECKER_OFFSET UNITYSDK_OFFSET(0xA2B6E20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__ISSELECTEDRELICINFOINMORECHOICEVALID_OFFSET UNITYSDK_OFFSET(0xA2B8570)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYHIDEMORECHOICEPANEL_OFFSET UNITYSDK_OFFSET(0xA2B7EF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYMODIFYPIN_OFFSET UNITYSDK_OFFSET(0xA2B8DD0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA2B73A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYSELECTRELICINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B8520)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__PINSELECTEDRELIC_OFFSET UNITYSDK_OFFSET(0xA2B7900)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__REQUESTMODIFYPINRELIC_OFFSET UNITYSDK_OFFSET(0xA2B8880)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__RESETSELECTEDRELICINFOINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B7350)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__SETFOCUSEDRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2B7D40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__TRYRESETSELECTEDRELICINFOINMORECHOICE_OFFSET UNITYSDK_OFFSET(0xA2B8340)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__UNPINSELECTEDRELIC_OFFSET UNITYSDK_OFFSET(0xA2B7690)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___PINSELECTEDRELIC_B__58_0_OFFSET UNITYSDK_OFFSET(0xA2B8E70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___UNPINSELECTEDRELIC_B__59_0_OFFSET UNITYSDK_OFFSET(0xA2B8F90)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareViewModel_TypeDefinitionIndex = 61200;

	class RelicSmartSuitCompareViewModel : public ::System::Object
	{
	public:
		::Class_1_045F75CAE3CBF38C* _PinChecker; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _PlanResult_k__BackingField; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* _LastPageSelectedRelicInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _FocusedRelicInfos; // 0x28
		::Class_1_81595715048249D2* _DataSource; // 0x30
		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* _SelectedRelicInfoInMoreChoice_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* _CachedMoreChoiceRelicResultInfos; // 0x40
		::System::Int32 _CurIndex_k__BackingField; // 0x48
		::System::Int32 _PreIndex_k__BackingField; // 0x4C
		::System::Boolean _IsMoreChoiceShow_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PININFORECORDER_OFFSET))(this);
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

		::System::Int32 get_PreIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_PREINDEX_OFFSET))(this);
		}

		::System::Void set_PreIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_PREINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURINDEX_OFFSET))(this);
		}

		::System::Void set_CurIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_CURINDEX_OFFSET))(this, value);
		}

		::RPG::GameCore::RelicType get_CurRelicType()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURRELICTYPE_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_CurRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_CURRELICINFO_OFFSET))(this);
		}

		::System::Boolean get_IsMoreChoiceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_ISMORECHOICESHOW_OFFSET))(this);
		}

		::System::Void set_IsMoreChoiceShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_ISMORECHOICESHOW_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_LastPageSelectedRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_LASTPAGESELECTEDRELICINFO_OFFSET))(this);
		}

		::System::Void set_LastPageSelectedRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_LASTPAGESELECTEDRELICINFO_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_SelectedRelicInfoInMoreChoice()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GET_SELECTEDRELICINFOINMORECHOICE_OFFSET))(this);
		}

		::System::Void set_SelectedRelicInfoInMoreChoice(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SET_SELECTEDRELICINFOINMORECHOICE_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* Create(::System::Int32 index, ::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*(*)(::System::Int32, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CREATE_OFFSET))(index, avatar, planData, planResult);
		}

		::System::Void _InitDataSource(::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITDATASOURCE_OFFSET))(this, avatar, planData);
		}

		::System::Void _InitPinChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__INITPINCHECKER_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_DESTROY_OFFSET))(this);
		}

		::System::Void _ClearCachedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CLEARCACHEDDATA_OFFSET))(this);
		}

		::System::Void _ClearCachedRelicResultInfosByRelicType(::RPG::GameCore::RelicType relicType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__CLEARCACHEDRELICRESULTINFOSBYRELICTYPE_OFFSET))(this, relicType);
		}

		::System::Void FlipPage(::System::Boolean toLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_FLIPPAGE_OFFSET))(this, toLeft);
		}

		::System::Boolean IsPinned(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISPINNED_OFFSET))(this, relic);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* GetFocusedRelicInfo(::System::Int32 index)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETFOCUSEDRELICINFO_OFFSET))(this, index);
		}

		::System::Void PinOrUnPinRelic(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_PINORUNPINRELIC_OFFSET))(this, relic);
		}

		::System::Void _SetFocusedRelicInfo(::System::Int32 index, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* relicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__SETFOCUSEDRELICINFO_OFFSET))(this, index, relicInfo);
		}

		::System::Void ShowMoreChoicePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SHOWMORECHOICEPANEL_OFFSET))(this);
		}

		::System::Void HideMoreChoicePanel(::System::Boolean isResetSelectedRelicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_HIDEMORECHOICEPANEL_OFFSET))(this, isResetSelectedRelicInfo);
		}

		::System::Boolean IsSelectedRelicPinned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_ISSELECTEDRELICPINNED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GetRelicResultInfos(::RPG::GameCore::RelicType relicType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_GETRELICRESULTINFOS_OFFSET))(this, relicType);
		}

		::System::Void SelectRelicInMoreChoice(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* relicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_SELECTRELICINMORECHOICE_OFFSET))(this, relicInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _GetOrCreateRelicResultInfos(::RPG::GameCore::RelicType relicType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETORCREATERELICRESULTINFOS_OFFSET))(this, relicType);
		}

		::System::Void _ResetSelectedRelicInfoInMoreChoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__RESETSELECTEDRELICINFOINMORECHOICE_OFFSET))(this);
		}

		::System::Void _TryResetSelectedRelicInfoInMoreChoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__TRYRESETSELECTEDRELICINFOINMORECHOICE_OFFSET))(this);
		}

		::System::Boolean _IsSelectedRelicInfoInMoreChoiceValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__ISSELECTEDRELICINFOINMORECHOICEVALID_OFFSET))(this);
		}

		::System::Void ConfirmSelectMoreChoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL_CONFIRMSELECTMORECHOICE_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetClonePinData()
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__GETCLONEPINDATA_OFFSET))(this);
		}

		::System::Void _PinSelectedRelic(::RPG::Client::RelicSmartSuit::PinOperationSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__PINSELECTEDRELIC_OFFSET))(this, sourceType);
		}

		::System::Void _UnPinSelectedRelic(::RPG::Client::RelicSmartSuit::PinOperationSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__UNPINSELECTEDRELIC_OFFSET))(this, sourceType);
		}

		::RPG::Client::Promises::Promise* _RequestModifyPinRelic(::RPG::Client::RelicSmartSuit::PinData* pinData)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__REQUESTMODIFYPINRELIC_OFFSET))(this, pinData);
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

		::System::Void _NotifyModifyPin(::System::Boolean isPin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYMODIFYPIN_OFFSET))(this, isPin);
		}

		::System::Void _NotifyHideMoreChoicePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYHIDEMORECHOICEPANEL_OFFSET))(this);
		}

		::System::Void _NotifySelectRelicInMoreChoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL__NOTIFYSELECTRELICINMORECHOICE_OFFSET))(this);
		}

		::System::Void __PinSelectedRelic_b__58_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___PINSELECTEDRELIC_B__58_0_OFFSET))(this);
		}

		::System::Void __UnPinSelectedRelic_b__59_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___UNPINSELECTEDRELIC_B__59_0_OFFSET))(this);
		}
	};
}
