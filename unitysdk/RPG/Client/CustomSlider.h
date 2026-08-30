#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Slider.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMSLIDER_ONDRAGMOVED_OFFSET UNITYSDK_OFFSET(0x192D70D0)
#define RPG_CLIENT_CUSTOMSLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x192D6FE0)
#define RPG_CLIENT_CUSTOMSLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x192D72D0)
#define RPG_CLIENT_CUSTOMSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x192D7320)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomSlider_TypeDefinitionIndex = 72448;

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

		::System::Void OnDragMoved(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER_ONDRAGMOVED_OFFSET))(this, a1, a2);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMSLIDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}
	};
}
