#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x150D7130)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x150D6E00)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_EB78CC0DDDE15E0D_OFFSET UNITYSDK_OFFSET(0x150D8220)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x150D7390)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x150D7BD0)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDROP_OFFSET UNITYSDK_OFFSET(0x150D6B20)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x150D7F10)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x150D70C0)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x150D7340)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_SETUP_OFFSET UNITYSDK_OFFSET(0x150D69B0)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150D83E0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHolmesDropTargetText_TypeDefinitionIndex = 63486;

	class ActivityHolmesDropTargetText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Field_5_1; // 0x18
		::System::Int32 Field_5_0; // 0x1C
		::System::Int32 Field_5_7; // 0x20
		::System::Boolean Field_5_6; // 0x24
		::System::Int32 Field_5_5; // 0x28
		::System::String* Field_5_4; // 0x30
		::UnityEngine::RectTransform* Field_5_11; // 0x38
		::UnityEngine::RectTransform* Field_5_10; // 0x40
		::UnityEngine::RectTransform* Field_5_9; // 0x48
		::UnityEngine::RectTransform* Field_5_8; // 0x50
		::System::Action_1<::System::Int32>* Field_5_15; // 0x58
		::System::Action* Field_5_14; // 0x60
		::System::Action_1<::System::Int32>* Field_5_13; // 0x68
		::UnityEngine::RectTransform* Field_5_12; // 0x70
		::System::Boolean Field_5_19; // 0x78
		::UnityEngine::GameObject* Field_5_18; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::System::String* a6, ::UnityEngine::RectTransform* a7, ::UnityEngine::RectTransform* a8, ::UnityEngine::RectTransform* a9, ::UnityEngine::RectTransform* a10, ::System::Action_1<::System::Int32>* a11, ::System::Action* a12, ::System::Action_1<::System::Int32>* a13, ::UnityEngine::RectTransform* a14)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::String*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Action_1<::System::Int32>*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_SETUP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_ADA85C40A3382050()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_ADA85C40A3382050_OFFSET))(this);
		}

		::System::Boolean Method_5_EB78CC0DDDE15E0D(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_EB78CC0DDDE15E0D_OFFSET))(this, a1);
		}

		::System::Void Method_5_BA446D4D3EBC6EEF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_METHOD_5_BA446D4D3EBC6EEF_OFFSET))(this, a1);
		}
	};
}
