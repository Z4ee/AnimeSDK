#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ILayoutElement; }

#define LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x153D0290)
#define LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x153D02D0)
#define LAYOUTBUDGETLIMITER_COMPUTEMYBUDGET_OFFSET UNITYSDK_OFFSET(0x153D03E0)
#define LAYOUTBUDGETLIMITER_COUNTACTIVECHILDREN_OFFSET UNITYSDK_OFFSET(0x153D08F0)
#define LAYOUTBUDGETLIMITER_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x153D0390)
#define LAYOUTBUDGETLIMITER_GETDEBUGSUMMARY_OFFSET UNITYSDK_OFFSET(0x153D10B0)
#define LAYOUTBUDGETLIMITER_GETSIBLINGUNCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x153D09A0)
#define LAYOUTBUDGETLIMITER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x153D0270)
#define LAYOUTBUDGETLIMITER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x153D0260)
#define LAYOUTBUDGETLIMITER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x153D0280)
#define LAYOUTBUDGETLIMITER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x153D0250)
#define LAYOUTBUDGETLIMITER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x153D0240)
#define LAYOUTBUDGETLIMITER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x153CFE40)
#define LAYOUTBUDGETLIMITER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x153CFE30)
#define LAYOUTBUDGETLIMITER_GET_SOURCEELEMENT_OFFSET UNITYSDK_OFFSET(0x153CFDF0)
#define LAYOUTBUDGETLIMITER_LOGREENTRANCYERROR_OFFSET UNITYSDK_OFFSET(0x153D0200)
#define LAYOUTBUDGETLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x153D0FC0)
#define LAYOUTBUDGETLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x153D1010)
#define LAYOUTBUDGETLIMITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x153D0EF0)
#define LAYOUTBUDGETLIMITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x153D0D70)
#define LAYOUTBUDGETLIMITER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x153D1060)
#define LAYOUTBUDGETLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x153D0F70)
#define LAYOUTBUDGETLIMITER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x153D0DE0)
#define LAYOUTBUDGETLIMITER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x153D0310)
#define LAYOUTBUDGETLIMITER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x153D0350)
#define LAYOUTBUDGETLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x153D1710)
#define LAYOUTBUDGETLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x153D1770)
#define LAYOUTBUDGETLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x153D1800)
#define LAYOUTBUDGETLIMITER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x153D1890)
#define LAYOUTBUDGETLIMITER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x153D1920)
#define LAYOUTBUDGETLIMITER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x153D19B0)
#define LAYOUTBUDGETLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x153D1A40)

inline static constexpr unsigned int LayoutBudgetLimiter_TypeDefinitionIndex = 46944;

class LayoutBudgetLimiter : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::RectTransform* ConstraintSource; // 0x18
	::UnityEngine::EventSystems::UIBehaviour* Source; // 0x20
	::System::Int32 _layoutPriority; // 0x28
	::System::Boolean _isQuerying; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::ILayoutElement* get_SourceElement()
	{
		return ((::UnityEngine::UI::ILayoutElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_SOURCEELEMENT_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void SetLayoutHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_SETLAYOUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void SetLayoutVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_SETLAYOUTVERTICAL_OFFSET))(this);
	}

	::UnityEngine::Vector2Int GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GETCOLROW_OFFSET))(this);
	}

	::System::Single ComputeMyBudget()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_COMPUTEMYBUDGET_OFFSET))(this);
	}

	::System::Single GetSiblingUnconstrained(::UnityEngine::Transform* sibling)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GETSIBLINGUNCONSTRAINED_OFFSET))(this, sibling);
	}

	static ::System::Int32 CountActiveChildren(::UnityEngine::Transform* parent)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_COUNTACTIVECHILDREN_OFFSET))(parent);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_SETDIRTY_OFFSET))(this);
	}

	::System::Void LogReentrancyError()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_LOGREENTRANCYERROR_OFFSET))(this);
	}

	::System::String* GetDebugSummary()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GETDEBUGSUMMARY_OFFSET))(this);
	}

	::System::Void __base_OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};
