#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1353ACF0)
#define LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1353AD30)
#define LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1353ACD0)
#define LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1353ACC0)
#define LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1353ACE0)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353A9B0)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353A920)
#define LAYOUTLIMITER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1353AC90)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353A890)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353A6F0)
#define LAYOUTLIMITER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1353AC80)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353ABF0)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353AB60)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1353ACB0)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353AAD0)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353AA40)
#define LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1353ACA0)
#define LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1353AFE0)
#define LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1353AF90)
#define LAYOUTLIMITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1353AE30)
#define LAYOUTLIMITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1353AD70)
#define LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1353AEB0)
#define LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1353AF20)
#define LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1353ADE0)
#define LAYOUTLIMITER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1353A780)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353A9C0)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353A930)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353A8A0)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353A700)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353AC00)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353AB70)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x1353AAE0)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x1353AA50)
#define LAYOUTLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1353B030)
#define LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1353B090)
#define LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1353B120)
#define LAYOUTLIMITER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1353B1B0)
#define LAYOUTLIMITER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1353B240)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1353B2D0)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1353B360)
#define LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1353B3F0)

inline static constexpr unsigned int LayoutLimiter_TypeDefinitionIndex = 72514;

class LayoutLimiter : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::Vector2 _minWidthLimit; // 0x18
	::UnityEngine::Vector2 _minHeightLimit; // 0x20
	::UnityEngine::Vector2 _preferredWidthLimit; // 0x28
	::UnityEngine::Vector2 _preferredHeightLimit; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER__CTOR_OFFSET))(this);
	}

	::System::Single get_minWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SETDIRTY_OFFSET))(this);
	}

	::System::Void __base_OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};
