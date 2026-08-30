#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class CanvasScaler; }
namespace UnityEngine::UI { class LayoutElement; }

#define SRF_UI_DRAGHANDLE_COMMITCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1EC43840)
#define SRF_UI_DRAGHANDLE_GETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1EC432C0)
#define SRF_UI_DRAGHANDLE_GETMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1EC43600)
#define SRF_UI_DRAGHANDLE_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1EC43520)
#define SRF_UI_DRAGHANDLE_GET_MULT_OFFSET UNITYSDK_OFFSET(0x1EC43170)
#define SRF_UI_DRAGHANDLE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1EC43190)
#define SRF_UI_DRAGHANDLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1EC43440)
#define SRF_UI_DRAGHANDLE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1EC437E0)
#define SRF_UI_DRAGHANDLE_SETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1EC43620)
#define SRF_UI_DRAGHANDLE_START_OFFSET UNITYSDK_OFFSET(0x1EC439B0)
#define SRF_UI_DRAGHANDLE_VERIFY_OFFSET UNITYSDK_OFFSET(0x1EC431C0)
#define SRF_UI_DRAGHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC43A00)

namespace SRF::UI
{
	inline static constexpr unsigned int DragHandle_TypeDefinitionIndex = 34710;

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

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_ONENDDRAG_OFFSET))(this, a1);
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

		::System::Void SetCurrentValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRF_UI_DRAGHANDLE_SETCURRENTVALUE_OFFSET))(this, a1);
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
