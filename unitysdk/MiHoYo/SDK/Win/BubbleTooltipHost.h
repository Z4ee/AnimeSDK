#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B7FAB00)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1B7FAB30)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FAB60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BubbleTooltipHost_TypeDefinitionIndex = 9487;

	class BubbleTooltipHost : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Tips; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_ONPOINTEREXIT_OFFSET))(this, a1);
		}
	};
}
