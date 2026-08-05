#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/Logic/UI/Controller/UIBaseDynamicShowTipsWidgetController.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_2_7614C15477CEE5F8_1;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_CLOSEPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x184AF230)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET_ISPERSISTENTTIPSSHOWING_OFFSET UNITYSDK_OFFSET(0x184AE7D0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET_TIMECONFIGDURATION_OFFSET UNITYSDK_OFFSET(0x184AE7E0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET UNITYSDK_OFFSET(0x184AE740)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET UNITYSDK_OFFSET(0x184AE4B0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x184AF370)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184AEC10)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184AECA0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184AF010)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184AE810)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET UNITYSDK_OFFSET(0x184AEDE0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x184AF820)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x184B00B0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET UNITYSDK_OFFSET(0x184AFFD0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x184AF150)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET UNITYSDK_OFFSET(0x184AF0B0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x184AFB80)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x184AF4B0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184B0190)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__24_0_OFFSET UNITYSDK_OFFSET(0x184B01F0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B0250)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184B02E0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B0380)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B0410)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController_TypeDefinitionIndex = 77521;

	class UIInLevelTipsWidgetController : public ::Code::Logic::UI::Controller::UIBaseDynamicShowTipsWidgetController
	{
	public:
		// static const ::System::Single MinTipsWidth; // 0x0
		// static const ::System::Single SizeAnimDelayRatio; // 0x0
		// static const ::System::Single SizeAnimDurationRatio; // 0x0
		::Class_2_7614C15477CEE5F8_1* _view; // 0x2D0
		::System::Single _duration; // 0x2D8
		::System::String* _persistentTipsKey; // 0x2E0
		::System::Boolean _isPersistentTipsShowing; // 0x2E8
		::UnityEngine::RectTransform* _tipsContent; // 0x2F0
		::DG::Tweening::Tweener* _sizeTween; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle _sizeAnimHandle; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isUIValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET))(this);
		}

		::System::Boolean get__isUIActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPersistentTipsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET_ISPERSISTENTTIPSSHOWING_OFFSET))(this);
		}

		::System::Single get_TimeConfigDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET_TIMECONFIGDURATION_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetPersistentTips(::System::String* localizationKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET))(this, localizationKey);
		}

		::System::Void HidePersistentTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET))(this);
		}

		::System::Void ClosePersistentTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_CLOSEPERSISTENTTIPS_OFFSET))(this);
		}

		::System::Void RefreshTips(::System::String* localizationKey, ::System::Boolean isPersistent, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET))(this, localizationKey, isPersistent, duration);
		}

		::System::Void ScheduleAutoHide(::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET))(this, isPersistent);
		}

		::System::Void ScheduleAutoClose(::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOCLOSE_OFFSET))(this, isPersistent);
		}

		::System::Void ResetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET))(this);
		}

		::System::Void StopSizeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET))(this);
		}

		::System::Void UpdateContentFadeInAnimation(::System::Boolean resetLayout, ::System::Boolean fromMinSize, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET))(this, resetLayout, fromMinSize, callback);
		}

		::System::Void UpdateContentFadeOutAnimation(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET))(this, callback);
		}

		::System::Void _HidePersistentTips_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__24_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
