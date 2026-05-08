#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A35AC00)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A35AC30)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35AC60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BubbleTooltipHost_TypeDefinitionIndex = 20120;

	class BubbleTooltipHost : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Tips; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTEREXIT_OFFSET))(this, eventData);
		}
	};
}
