#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/Button.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC8C070)
#define RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0xCC8C6D0)
#define RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET UNITYSDK_OFFSET(0xCC8C240)
#define RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0xCC8BC10)
#define RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0xCC8B880)
#define RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xCC8C4D0)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xCC8C2D0)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xCC8C130)
#define RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0xCC8C3D0)
#define RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0xCC8BE50)
#define RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET UNITYSDK_OFFSET(0xCC8C550)
#define RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0xCC8C720)
#define RPG_CLIENT_CUSTOMBUTTON_SUBSCRIBECLICKEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xCC8BC80)
#define RPG_CLIENT_CUSTOMBUTTON_UNSUBSCRIBEALLCLICKEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xCC8BDC0)
#define RPG_CLIENT_CUSTOMBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C770)
#define RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xCC8C640)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton_TypeDefinitionIndex = 72446;

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

		::System::Action* SubscribeClickEventListener(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SUBSCRIBECLICKEVENTLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnsubscribeAllClickEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_UNSUBSCRIBEALLCLICKEVENTLISTENER_OFFSET))(this);
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
	};
}
