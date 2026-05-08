#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define MIHOYO_SDK_STATICICON_DELAYEDACTION_OFFSET UNITYSDK_OFFSET(0x1AA594C0)
#define MIHOYO_SDK_STATICICON_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA58FF0)
#define MIHOYO_SDK_STATICICON_GET_IMAGEURL_OFFSET UNITYSDK_OFFSET(0x1AA59010)
#define MIHOYO_SDK_STATICICON_GET_TOOLTIPTEXT_OFFSET UNITYSDK_OFFSET(0x1AA58FD0)
#define MIHOYO_SDK_STATICICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AA59910)
#define MIHOYO_SDK_STATICICON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AA59920)
#define MIHOYO_SDK_STATICICON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1AA59590)
#define MIHOYO_SDK_STATICICON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1AA59750)
#define MIHOYO_SDK_STATICICON_POINTERENTER_OFFSET UNITYSDK_OFFSET(0x1AA59520)
#define MIHOYO_SDK_STATICICON_POINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1AA59560)
#define MIHOYO_SDK_STATICICON_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA59000)
#define MIHOYO_SDK_STATICICON_SET_IMAGEURL_OFFSET UNITYSDK_OFFSET(0x1AA59020)
#define MIHOYO_SDK_STATICICON_SET_TOOLTIPTEXT_OFFSET UNITYSDK_OFFSET(0x1AA58FE0)
#define MIHOYO_SDK_STATICICON_START_OFFSET UNITYSDK_OFFSET(0x1AA59160)
#define MIHOYO_SDK_STATICICON_UPDATEIMAGETEXTURE_OFFSET UNITYSDK_OFFSET(0x1AA59930)
#define MIHOYO_SDK_STATICICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA599E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int StaticIcon_TypeDefinitionIndex = 18881;

	class StaticIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 ICON_SIZE = 0x24; // 0x0
		::System::String* _ImageUrl; // 0x18
		::UnityEngine::RectTransform* _RectTransform; // 0x20
		::UnityEngine::UI::RawImage* _IconImage; // 0x28
		::System::Boolean _IsTooltipVisible; // 0x30
		::System::String* _TooltipText_k__BackingField; // 0x38
		::System::String* _ImagePath_k__BackingField; // 0x40
		::UnityEngine::Coroutine* exitRoutine; // 0x48
		::UnityEngine::Coroutine* enterRoutine; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__CTOR_OFFSET))(this);
		}

		::System::String* get_TooltipText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_GET_TOOLTIPTEXT_OFFSET))(this);
		}

		::System::Void set_TooltipText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_SET_TOOLTIPTEXT_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_ImageUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_GET_IMAGEURL_OFFSET))(this);
		}

		::System::Void set_ImageUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_SET_IMAGEURL_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedAction(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* action, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_DELAYEDACTION_OFFSET))(this, action, eventData);
		}

		::System::Void PointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_POINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void PointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_POINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateImageTexture(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON_UPDATEIMAGETEXTURE_OFFSET))(this, texture);
		}
	};
}
