#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class CanvasScaler; }
namespace UnityEngine::UI { class LayoutElement; }

#define SRF_UI_DRAGHANDLE_COMMITCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19EAAC90)
#define SRF_UI_DRAGHANDLE_GETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19EAA870)
#define SRF_UI_DRAGHANDLE_GETMAXSIZE_OFFSET UNITYSDK_OFFSET(0x19EAAAC0)
#define SRF_UI_DRAGHANDLE_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x19EAAA80)
#define SRF_UI_DRAGHANDLE_GET_MULT_OFFSET UNITYSDK_OFFSET(0x19EAA720)
#define SRF_UI_DRAGHANDLE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x19EAA740)
#define SRF_UI_DRAGHANDLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19EAA950)
#define SRF_UI_DRAGHANDLE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x19EAABF0)
#define SRF_UI_DRAGHANDLE_SETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19EAAAE0)
#define SRF_UI_DRAGHANDLE_START_OFFSET UNITYSDK_OFFSET(0x19EAAD50)
#define SRF_UI_DRAGHANDLE_VERIFY_OFFSET UNITYSDK_OFFSET(0x19EAA770)
#define SRF_UI_DRAGHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAADA0)

namespace SRF::UI
{
	inline static constexpr unsigned int DragHandle_TypeDefinitionIndex = 33290;

	class DragHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::CanvasScaler* _canvasScaler; // 0x18
		::System::Single _delta; // 0x20
		::System::Single _startValue; // 0x24
		::UnityEngine::RectTransform_Axis Axis; // 0x28
		::System::Boolean Invert; // 0x2C
		::System::Single MaxSize; // 0x30
		::UnityEngine::UI::LayoutElement* TargetLayoutElement; // 0x38
		::UnityEngine::RectTransform* TargetRectTransform; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE__CTOR_OFFSET))(this);
		}

		::System::Single get_Mult()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_GET_MULT_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_START_OFFSET))(this);
		}

		::System::Boolean Verify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_VERIFY_OFFSET))(this);
		}

		::System::Single GetCurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_GETCURRENTVALUE_OFFSET))(this);
		}

		::System::Void SetCurrentValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_SETCURRENTVALUE_OFFSET))(this, value);
		}

		::System::Void CommitCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_COMMITCURRENTVALUE_OFFSET))(this);
		}

		::System::Single GetMinSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_GETMINSIZE_OFFSET))(this);
		}

		::System::Single GetMaxSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_GETMAXSIZE_OFFSET))(this);
		}
	};
}
