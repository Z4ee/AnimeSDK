#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/Button.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xB72A900)
#define RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0xB72B220)
#define RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET UNITYSDK_OFFSET(0xB72AB90)
#define RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0xB72A670)
#define RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0xB72A2E0)
#define RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB72AF50)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xB72AC20)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB72A9C0)
#define RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB72ADB0)
#define RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0xB72A6E0)
#define RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET UNITYSDK_OFFSET(0xB72B070)
#define RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0xB72B230)
#define RPG_CLIENT_CUSTOMBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xB72B240)
#define RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xB72B110)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB72B260)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0xB72B450)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB72B3A0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xB72B510)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB72B460)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB72B2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton_TypeDefinitionIndex = 67761;

	class CustomButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean _IsFirstSet; // 0x110
		::System::Boolean _IsForbidButtonCheck; // 0x111
		::UnityEngine::RectTransform* _TmpRect; // 0x118
		::System::Boolean _EnableMobileHover; // 0x120
		::System::Boolean IsSelectDisabled; // 0x121
		::RPG::Client::CustomButton_VoidDelegate* onSelectTrigger; // 0x128
		::RPG::Client::CustomButton_VoidDelegate* onDeselectTrigger; // 0x130
		::RPG::Client::CustomButton_VoidDelegate* onPointerEnterTrigger; // 0x138
		::RPG::Client::CustomButton_VoidDelegate* onPointerExitTrigger; // 0x140
		::System::Boolean IsSelectedByController; // 0x148
		::RPG::Client::UIButtonSoundType SoundType; // 0x14C
		::System::String* SpecialSoundEvent; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPointInRect(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET))(this, a1);
		}

		::System::Void PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void SetMobileHoverEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET))(this, a1);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Boolean get__CanHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET))(this);
		}

		::System::Boolean get_IsForbidButtonCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET))(this);
		}

		::System::Void set_IsForbidButtonCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_IGNOREPOINTDISTANCECHECK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, a1);
		}
	};
}
