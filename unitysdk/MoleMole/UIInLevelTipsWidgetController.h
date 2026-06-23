#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7614C15477CEE5F8_1;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET UNITYSDK_OFFSET(0x177CE590)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET UNITYSDK_OFFSET(0x177CE300)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x177CF1E0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177CE7D0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONDEALERRORDISPLAYERRORCODEEVENT_OFFSET UNITYSDK_OFFSET(0x177CE9C0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONSHOWINLEVELTIPSROWEVENT_OFFSET UNITYSDK_OFFSET(0x177CF0C0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177CE860)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177CE620)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET UNITYSDK_OFFSET(0x177CEE90)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x177CF770)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET UNITYSDK_OFFSET(0x177CFF10)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x177CF320)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET UNITYSDK_OFFSET(0x177CE920)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x177CFAD0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x177CF400)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177CFFF0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__20_0_OFFSET UNITYSDK_OFFSET(0x177D0050)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177D00B0)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177D0140)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177D01D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController_TypeDefinitionIndex = 82962;

	class UIInLevelTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MinTipsWidth; // 0x0
		// static const ::System::Single SizeAnimDelayRatio; // 0x0
		// static const ::System::Single SizeAnimDurationRatio; // 0x0
		::Class_2_7614C15477CEE5F8_1* _view; // 0x2C0
		::System::Single _duration; // 0x2C8
		::System::String* _persistentTipsKey; // 0x2D0
		::System::Boolean _isPersistentTipsShowing; // 0x2D8
		::UnityEngine::RectTransform* _tipsContent; // 0x2E0
		::DG::Tweening::Tweener* _sizeTween; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _sizeAnimHandle; // 0x2F0

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

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnDealErrorDisplayErrorCodeEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONDEALERRORDISPLAYERRORCODEEVENT_OFFSET))(this, args);
		}

		::System::Void OnShowInLevelTipsRowEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_ONSHOWINLEVELTIPSROWEVENT_OFFSET))(this, args);
		}

		::System::Void SetPersistentTips(::System::String* localizationKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET))(this, localizationKey);
		}

		::System::Void HidePersistentTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET))(this);
		}

		::System::Void RefreshTips(::System::String* localizationKey, ::System::Boolean isPersistent, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET))(this, localizationKey, isPersistent, duration);
		}

		::System::Void ScheduleAutoHide(::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET))(this, isPersistent);
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

		::System::Void _HidePersistentTips_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
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
