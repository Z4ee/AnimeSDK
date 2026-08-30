#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UICLONABLEDRAG_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE345E50)
#define RPG_CLIENT_UICLONABLEDRAG_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE345CA0)
#define RPG_CLIENT_UICLONABLEDRAG_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xE3463E0)
#define RPG_CLIENT_UICLONABLEDRAG_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xE346540)
#define RPG_CLIENT_UICLONABLEDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0xE3465B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIClonableDrag_TypeDefinitionIndex = 72666;

	class UIClonableDrag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_3<::System::Object*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*>* BeginDragCallback; // 0x18
		::System::Action_3<::System::Object*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*>* EndDragCallback; // 0x20
		::System::Action* ClickCallback; // 0x28
		::System::Object* DragParm; // 0x30
		::UnityEngine::Transform* Root; // 0x38
		::System::Boolean AutoDestryOnDragEnd; // 0x40
		::System::Boolean AjustRectCenter; // 0x41
		::System::Boolean DragHideOrigin; // 0x42
		::System::Boolean Mute; // 0x43
		::System::Single CloneScaleFactor; // 0x44
		::UnityEngine::GameObject* JAHEFPCEEAH; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICLONABLEDRAG__CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICLONABLEDRAG_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICLONABLEDRAG_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICLONABLEDRAG_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICLONABLEDRAG_ONPOINTERCLICK_OFFSET))(this, a1);
		}
	};
}
