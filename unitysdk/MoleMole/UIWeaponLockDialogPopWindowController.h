#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_528DE26FBD0A627F;
class Class_2_F7CAAD54879BD084;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralReportItemWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_COMPAREIMPLEMENTATIONS_OFFSET UNITYSDK_OFFSET(0x10F02B50)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_COMPUTESMARTLOCKRESULT_OFFSET UNITYSDK_OFFSET(0x10F008D0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTELOCKALLARANK_OFFSET UNITYSDK_OFFSET(0x10EFFB20)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTESMARTLOCKUNLOCK_OFFSET UNITYSDK_OFFSET(0x10F00200)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTEUNLOCKALLARANK_OFFSET UNITYSDK_OFFSET(0x10EFFE90)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_FINDBESTEXACTPLAN_OFFSET UNITYSDK_OFFSET(0x10F01D10)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_FINDBESTIMPLEMENTATIONFORPARTITION_OFFSET UNITYSDK_OFFSET(0x10F020F0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GENERATEPARTITIONS_OFFSET UNITYSDK_OFFSET(0x10F01F30)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GETARANKWEAPONS_OFFSET UNITYSDK_OFFSET(0x10F00650)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10EFE3B0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_INITREPORTITEMS_OFFSET UNITYSDK_OFFSET(0x10EFE950)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_INITSLIDER_OFFSET UNITYSDK_OFFSET(0x10EFEB60)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ISWEAPONLOCKED_OFFSET UNITYSDK_OFFSET(0x10F01C20)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONADDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x10EFF980)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFEFA0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x10EFF9E0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONOPERATIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x10F00840)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONREDUCEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x10EFF920)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONREPORTITEMSELECTED_OFFSET UNITYSDK_OFFSET(0x10EFF810)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x10EFF6E0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFF030)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EFE3C0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EFE780)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_REFRESHOKBTN_OFFSET UNITYSDK_OFFSET(0x10EFEF30)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_REFRESHSLIDERUI_OFFSET UNITYSDK_OFFSET(0x10EFF360)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_SENDDATARECORD_OFFSET UNITYSDK_OFFSET(0x10EFFAC0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_SETREPORTITEMCONTEXT_OFFSET UNITYSDK_OFFSET(0x10EFF160)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10F03020)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__EXECUTELOCKALLARANK_B__31_2_OFFSET UNITYSDK_OFFSET(0x10F03040)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__EXECUTEUNLOCKALLARANK_B__32_2_OFFSET UNITYSDK_OFFSET(0x10F03050)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10F03060)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10F030F0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10F03100)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10F03110)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponLockDialogPopWindowController_TypeDefinitionIndex = 81968;

	class UIWeaponLockDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 WeaponRarityA = 0x3; // 0x0
		// static const ::System::Int32 MaxRefineLevel = 0x5; // 0x0
		// static const ::System::String* ReportItem3TextKey; // 0x0
		// static const ::System::String* TipTextKey; // 0x0
		::Class_2_528DE26FBD0A627F* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _weaponItemList; // 0x320
		::System::Action_1<::System::Boolean>* _onBatchOperationDone; // 0x328
		::MoleMole::UIGeneralReportItemWidgetController* _reportItem1Ctrl; // 0x330
		::MoleMole::UIGeneralReportItemWidgetController* _reportItem2Ctrl; // 0x338
		::MoleMole::UIGeneralReportItemWidgetController* _reportItem3Ctrl; // 0x340
		::System::Int32 _selectedIndex; // 0x348
		::System::Int32 _curCount; // 0x34C
		::System::Int32 _minCount; // 0x350
		::System::Int32 _maxCount; // 0x354

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitReportItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_INITREPORTITEMS_OFFSET))(this);
		}

		::System::Void SetReportItemContext(::MoleMole::UIGeneralReportItemWidgetController* ctrl, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralReportItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_SETREPORTITEMCONTEXT_OFFSET))(this, ctrl, index);
		}

		::System::Void InitSlider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_INITSLIDER_OFFSET))(this);
		}

		::System::Void OnSliderValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONSLIDERVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void RefreshSliderUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_REFRESHSLIDERUI_OFFSET))(this);
		}

		::System::Void OnReportItemSelected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONREPORTITEMSELECTED_OFFSET))(this, index);
		}

		::System::Void RefreshOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_REFRESHOKBTN_OFFSET))(this);
		}

		::System::Void OnReduceBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONREDUCEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAddBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONADDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnOKBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void SendDataRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_SENDDATARECORD_OFFSET))(this);
		}

		::System::Void ExecuteLockAllARank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTELOCKALLARANK_OFFSET))(this);
		}

		::System::Void ExecuteUnlockAllARank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTEUNLOCKALLARANK_OFFSET))(this);
		}

		::System::Void ExecuteSmartLockUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_EXECUTESMARTLOCKUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsWeaponLocked(::System::UInt32 uid, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* allWeapons)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ISWEAPONLOCKED_OFFSET))(this, uid, allWeapons);
		}

		::System::Void OnOperationComplete(::System::Boolean isBatchLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_ONOPERATIONCOMPLETE_OFFSET))(this, isBatchLock);
		}

		::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* GetARankWeapons()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GETARANKWEAPONS_OFFSET))(this);
		}

		::System::Void ComputeSmartLockResult(::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* allARankWeapons, ::System::Int32 curCount, ::System::Collections::Generic::List_1<::System::UInt32>*& toLockIds, ::System::Collections::Generic::List_1<::System::UInt32>*& toUnlockIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_COMPUTESMARTLOCKRESULT_OFFSET))(this, allARankWeapons, curCount, toLockIds, toUnlockIds);
		}

		::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* FindBestExactPlan(::System::Int32 needed, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* fodderPool)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_FINDBESTEXACTPLAN_OFFSET))(this, needed, fodderPool);
		}

		::System::Void GeneratePartitions(::System::Int32 remaining, ::System::Int32 maxPart, ::System::Collections::Generic::List_1<::System::Int32>* current, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_GENERATEPARTITIONS_OFFSET))(this, remaining, maxPart, current, results);
		}

		::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* FindBestImplementationForPartition(::System::Collections::Generic::List_1<::System::Int32>* starPartition, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* fodderPool)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_FINDBESTIMPLEMENTATIONFORPARTITION_OFFSET))(this, starPartition, fodderPool);
		}

		::System::Int32 CompareImplementations(::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* a, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*, ::System::Collections::Generic::List_1<::Class_2_F7CAAD54879BD084*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER_COMPAREIMPLEMENTATIONS_OFFSET))(this, a, b);
		}

		::System::Void _ExecuteLockAllARank_b__31_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__EXECUTELOCKALLARANK_B__31_2_OFFSET))(this);
		}

		::System::Void _ExecuteUnlockAllARank_b__32_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER__EXECUTEUNLOCKALLARANK_B__32_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
