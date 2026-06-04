#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB38FA50)
#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xB38F9D0)
#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xB38FAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeEventListener_TypeDefinitionIndex = 66687;

	class AvatarPathChangeEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Single>* OnScrollTrigger; // 0x18
		::System::Action_1<::System::Single>* OnBeginDragTrigger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}
	};
}
