#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Slider.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMSLIDER_ONDRAGMOVED_OFFSET UNITYSDK_OFFSET(0xA0EF9A0)
#define RPG_CLIENT_CUSTOMSLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0EF890)
#define RPG_CLIENT_CUSTOMSLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA0EFBA0)
#define RPG_CLIENT_CUSTOMSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EFBF0)
#define RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONDRAGMOVED_OFFSET UNITYSDK_OFFSET(0xA0EFC40)
#define RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0EFC00)
#define RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA0EFC50)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomSlider_TypeDefinitionIndex = 66823;

	class CustomSlider : public ::UnityEngine::UI::Slider
	{
	public:
		::System::Single _DragSoundTime; // 0x180
		::System::Single _DragSoundInterval; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDragMoved(::System::Single oldValue, ::System::Single newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER_ONDRAGMOVED_OFFSET))(this, oldValue, newValue);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDragMoved(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONDRAGMOVED_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, P0);
		}
	};
}
