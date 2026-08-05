#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_780A0D5A906DB477;
namespace MoleMole { class HackEntrySubSystem; }
namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_APPLYCURRENTREVEALSTATE_OFFSET UNITYSDK_OFFSET(0x16D63B20)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x16D62670)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_HIDEIFVISIBLE_OFFSET UNITYSDK_OFFSET(0x16D63C80)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16D63D30)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D62870)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D62900)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D62710)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D62800)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16D62990)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_RESETSCANNINGREVEALSTATE_OFFSET UNITYSDK_OFFSET(0x16D63AC0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALALLCONTENTITEMS_OFFSET UNITYSDK_OFFSET(0x16D63960)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALBTNITEM_OFFSET UNITYSDK_OFFSET(0x16D65080)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALCONTENTITEM_OFFSET UNITYSDK_OFFSET(0x16D649C0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SAMPLECONTENTITEMFADEINTOEND_OFFSET UNITYSDK_OFFSET(0x16D64D50)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SETPROGRESSVISIBLE_OFFSET UNITYSDK_OFFSET(0x16D632E0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SHOWORREFRESH_OFFSET UNITYSDK_OFFSET(0x16D635F0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_UPDATELINE_OFFSET UNITYSDK_OFFSET(0x16D63DA0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x16D64780)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D65280)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D652E0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D65370)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D65400)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D65490)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraHackScanDetailWidgetController_TypeDefinitionIndex = 47727;

	class UICameraHackScanDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_CONTENT_COUNT = 0x3; // 0x0
		::Class_2_780A0D5A906DB477* _view; // 0x2C0
		::MoleMole::HackEntrySubSystem_HackTarget* _currentTarget; // 0x2C8
		::System::Boolean _isScanning; // 0x2D0
		::MoleMole::HackEntrySubSystem* _hackEntrySubSystem; // 0x2D8
		::System::Int32 _realLabelNum; // 0x2E0
		::System::Int32 _revealedIndex; // 0x2E4
		::System::Boolean _btnRevealed; // 0x2E8
		::System::Boolean _fadeIn02Finished; // 0x2E9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_uiCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::HackEntrySubSystem_HackTarget* target, ::System::Boolean isScanning)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, target, isScanning);
		}

		::System::Void ShowOrRefresh(::MoleMole::HackEntrySubSystem_HackTarget* target, ::System::Boolean isScanning, ::System::Action* onFadeInFinished)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SHOWORREFRESH_OFFSET))(this, target, isScanning, onFadeInFinished);
		}

		::System::Void HideIfVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_HIDEIFVISIBLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_UPDATELINE_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void SetProgressVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SETPROGRESSVISIBLE_OFFSET))(this, visible);
		}

		::System::Void ResetScanningRevealState(::System::Boolean fadeIn02Finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_RESETSCANNINGREVEALSTATE_OFFSET))(this, fadeIn02Finished);
		}

		::System::Void ApplyCurrentRevealState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_APPLYCURRENTREVEALSTATE_OFFSET))(this);
		}

		::System::Void RevealAllContentItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALALLCONTENTITEMS_OFFSET))(this);
		}

		::System::Void SampleContentItemFadeInToEnd(::UnityEngine::GameObject* itemGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_SAMPLECONTENTITEMFADEINTOEND_OFFSET))(this, itemGo);
		}

		::System::Void RevealContentItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALCONTENTITEM_OFFSET))(this, index);
		}

		::System::Void RevealBtnItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER_REVEALBTNITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
