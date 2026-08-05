#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

class LayoutBudgetLimiter;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1282D090)
#define LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1282D0D0)
#define LAYOUTBUDGETALLOCATOR_COMPUTEALLBUDGETS_OFFSET UNITYSDK_OFFSET(0x1282D120)
#define LAYOUTBUDGETALLOCATOR_GETBUDGET_OFFSET UNITYSDK_OFFSET(0x1282D020)
#define LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1282D8F0)
#define LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1282D8E0)
#define LAYOUTBUDGETALLOCATOR_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1282D900)
#define LAYOUTBUDGETALLOCATOR_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1282D8D0)
#define LAYOUTBUDGETALLOCATOR_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1282D8C0)
#define LAYOUTBUDGETALLOCATOR_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1282D8B0)
#define LAYOUTBUDGETALLOCATOR_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1282D8A0)
#define LAYOUTBUDGETALLOCATOR_INVALIDATECHILDCACHE_OFFSET UNITYSDK_OFFSET(0x1282DCD0)
#define LAYOUTBUDGETALLOCATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1282DEE0)
#define LAYOUTBUDGETALLOCATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1282DD20)
#define LAYOUTBUDGETALLOCATOR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1282DFE0)
#define LAYOUTBUDGETALLOCATOR_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1282E030)
#define LAYOUTBUDGETALLOCATOR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1282DF60)
#define LAYOUTBUDGETALLOCATOR_REFRESHCHILDCACHEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1282D9F0)
#define LAYOUTBUDGETALLOCATOR_REFRESHVLGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1282D910)
#define LAYOUTBUDGETALLOCATOR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1282DDD0)
#define LAYOUTBUDGETALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1282E0B0)
#define LAYOUTBUDGETALLOCATOR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1282E110)
#define LAYOUTBUDGETALLOCATOR___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1282E1A0)
#define LAYOUTBUDGETALLOCATOR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1282E230)
#define LAYOUTBUDGETALLOCATOR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1282E2C0)

inline static constexpr unsigned int LayoutBudgetAllocator_TypeDefinitionIndex = 63766;

class LayoutBudgetAllocator : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::RectTransform* ConstraintSource; // 0x18
	::System::Int32 _layoutPriority; // 0x20
	::UnityEngine::UI::VerticalLayoutGroup* _vlg; // 0x28
	::System::Boolean _vlgDirty; // 0x30
	::Il2CppArray<::LayoutBudgetLimiter*>* _childLimiters; // 0x38
	::Il2CppArray<::UnityEngine::Transform*>* _childTransforms; // 0x40
	::System::Int32 _cachedChildCount; // 0x48
	::Il2CppArray<::System::Single>* _budgets; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR__CTOR_OFFSET))(this);
	}

	::System::Single GetBudget(::System::Int32 siblingIndex)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GETBUDGET_OFFSET))(this, siblingIndex);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void ComputeAllBudgets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_COMPUTEALLBUDGETS_OFFSET))(this);
	}

	::System::Void RefreshVlgIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_REFRESHVLGIFNEEDED_OFFSET))(this);
	}

	::System::Void RefreshChildCacheIfNeeded(::System::Int32 childCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_REFRESHCHILDCACHEIFNEEDED_OFFSET))(this, childCount);
	}

	::System::Void InvalidateChildCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_INVALIDATECHILDCACHE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void OnTransformChildrenChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_SETDIRTY_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};
