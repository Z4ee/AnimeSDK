#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class LayoutBudgetAllocator;
namespace UnityEngine::UI { class ILayoutElement; }

#define LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1558EEF0)
#define LAYOUTBUDGETLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1558EF30)
#define LAYOUTBUDGETLIMITER_ENSUREALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1558EC60)
#define LAYOUTBUDGETLIMITER_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1558F140)
#define LAYOUTBUDGETLIMITER_GET_CACHEDUNCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1558E770)
#define LAYOUTBUDGETLIMITER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1558EED0)
#define LAYOUTBUDGETLIMITER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1558EEC0)
#define LAYOUTBUDGETLIMITER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1558EEE0)
#define LAYOUTBUDGETLIMITER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1558EEB0)
#define LAYOUTBUDGETLIMITER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1558EEA0)
#define LAYOUTBUDGETLIMITER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1558E7A0)
#define LAYOUTBUDGETLIMITER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1558E790)
#define LAYOUTBUDGETLIMITER_GET_SOURCEELEMENT_OFFSET UNITYSDK_OFFSET(0x1558E730)
#define LAYOUTBUDGETLIMITER_LOGMISSINGALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1558EE60)
#define LAYOUTBUDGETLIMITER_LOGREENTRANCYERROR_OFFSET UNITYSDK_OFFSET(0x1558EC20)
#define LAYOUTBUDGETLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1558F3F0)
#define LAYOUTBUDGETLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1558F440)
#define LAYOUTBUDGETLIMITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1558F320)
#define LAYOUTBUDGETLIMITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1558F190)
#define LAYOUTBUDGETLIMITER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1558F490)
#define LAYOUTBUDGETLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1558F3A0)
#define LAYOUTBUDGETLIMITER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1558F210)
#define LAYOUTBUDGETLIMITER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1558F0C0)
#define LAYOUTBUDGETLIMITER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1558F100)
#define LAYOUTBUDGETLIMITER_SET_CACHEDUNCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1558E780)
#define LAYOUTBUDGETLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1558F4E0)
#define LAYOUTBUDGETLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1558F540)
#define LAYOUTBUDGETLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1558F5D0)
#define LAYOUTBUDGETLIMITER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1558F660)
#define LAYOUTBUDGETLIMITER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1558F6F0)
#define LAYOUTBUDGETLIMITER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1558F780)
#define LAYOUTBUDGETLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1558F810)

inline static constexpr unsigned int LayoutBudgetLimiter_TypeDefinitionIndex = 46619;

class LayoutBudgetLimiter : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::EventSystems::UIBehaviour* Source; // 0x18
	::System::Int32 _layoutPriority; // 0x20
	::LayoutBudgetAllocator* _allocator; // 0x28
	::System::Boolean _allocatorSearched; // 0x30
	::System::Boolean _isQuerying; // 0x31
	::System::Single _CachedUnconstrained_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::ILayoutElement* get_SourceElement()
	{
		return ((::UnityEngine::UI::ILayoutElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_SOURCEELEMENT_OFFSET))(this);
	}

	::System::Single get_CachedUnconstrained()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_GET_CACHEDUNCONSTRAINED_OFFSET))(this);
	}

	::System::Void set_CachedUnconstrained(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_SET_CACHEDUNCONSTRAINED_OFFSET))(this, value);
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

	::System::Void EnsureAllocator()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_ENSUREALLOCATOR_OFFSET))(this);
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

	::System::Void LogMissingAllocator()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETLIMITER_LOGMISSINGALLOCATOR_OFFSET))(this);
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
