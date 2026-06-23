#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_132;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_CACHEFINISHPOINTS_OFFSET UNITYSDK_OFFSET(0x186CCF60)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_GETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x186CD8C0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_KILLINTROSEQUENCE_OFFSET UNITYSDK_OFFSET(0x186CE840)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x186CF6B0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186CE700)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x186CEEF0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186CE790)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186CCA90)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186CCC80)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_PLAYINTROSEQUENCE_OFFSET UNITYSDK_OFFSET(0x186CE210)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_PLAYTRANSITIONTOCHARGING_OFFSET UNITYSDK_OFFSET(0x186CF000)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x186CDAD0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_REGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x186CD6E0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_RESETINTROSTATE_OFFSET UNITYSDK_OFFSET(0x186CE950)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x186CD270)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x186CFDC0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_UNREGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x186CECB0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186CFFD0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__PLAYINTROSEQUENCE_B__33_0_OFFSET UNITYSDK_OFFSET(0x186D0030)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__PLAYTRANSITIONTOCHARGING_B__34_0_OFFSET UNITYSDK_OFFSET(0x186D0060)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186D00D0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186D0160)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186D01F0)
#define MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186D0280)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerDroneChargingWidgetController_TypeDefinitionIndex = 85828;

	class UIHackerDroneChargingWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 ChargingPointCount = 0x4; // 0x0
		// static const ::System::Single DecoSlideOffset; // 0x0
		::Class_2_79AE422BA06F6D26_132* _view; // 0x2C0
		::UnityEngine::Transform* _followTarget; // 0x2C8
		::UnityEngine::RectTransform* _selfRect; // 0x2D0
		::UnityEngine::RectTransform* _parentRect; // 0x2D8
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x2E0
		::System::UInt32 _entityID; // 0x2E8
		::System::String* _customPropertyName; // 0x2F0
		::Il2CppArray<::UnityEngine::GameObject*>* _finishPoints; // 0x2F8
		::Il2CppArray<::UnityEngine::GameObject*>* _emptyPoints; // 0x300
		::System::Int32 _currentFilledCount; // 0x308
		::DG::Tweening::Sequence* _introSequence; // 0x310
		::System::Single _decoOriginY; // 0x318
		::System::Boolean _decoFinished; // 0x31C
		::System::Boolean _chargingShown; // 0x31D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 fighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, fighterId, type, customType, oldValue, newValue);
		}

		::System::Void CacheFinishPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_CACHEFINISHPOINTS_OFFSET))(this);
		}

		::System::Void RegisterPropertyListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_REGISTERPROPERTYLISTENER_OFFSET))(this);
		}

		::System::Void UnregisterPropertyListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_UNREGISTERPROPERTYLISTENER_OFFSET))(this);
		}

		::System::Single GetCurrentProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_GETCURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshProgress(::System::Single progress, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET))(this, progress, force);
		}

		::System::Void SetupFollowTarget(::System::UInt32 entityID, ::System::String* attachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_SETUPFOLLOWTARGET_OFFSET))(this, entityID, attachPointName);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayIntroSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_PLAYINTROSEQUENCE_OFFSET))(this);
		}

		::System::Void PlayTransitionToCharging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_PLAYTRANSITIONTOCHARGING_OFFSET))(this);
		}

		::System::Void KillIntroSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_KILLINTROSEQUENCE_OFFSET))(this);
		}

		::System::Void ResetIntroState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_RESETINTROSTATE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER_SETVISIBLE_OFFSET))(this, visible);
		}

		::System::Void _PlayIntroSequence_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__PLAYINTROSEQUENCE_B__33_0_OFFSET))(this);
		}

		::System::Void _PlayTransitionToCharging_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER__PLAYTRANSITIONTOCHARGING_B__34_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDRONECHARGINGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
