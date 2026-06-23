#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x13EB9D20)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13EBA590)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x13EBA8C0)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_SETUP_OFFSET UNITYSDK_OFFSET(0x13EB9AC0)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBABA0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHolmesDraggableText_TypeDefinitionIndex = 39790;

	class ActivityHolmesDraggableText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Field_5_0; // 0x18
		::System::Int32 Field_5_1; // 0x1C
		::System::String* Field_5_2; // 0x20
		::System::Int32 Field_5_3; // 0x28
		::UnityEngine::RectTransform* Field_5_4; // 0x30
		::UnityEngine::RectTransform* Field_5_5; // 0x38
		::System::Action* Field_5_6; // 0x40
		::UnityEngine::CanvasGroup* Field_5_7; // 0x48
		::UnityEngine::GameObject* Field_5_8; // 0x50
		::System::Boolean Field_5_9; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::RectTransform* a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_SETUP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
