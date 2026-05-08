#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetContext_AlignParamType.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_ALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x28D960)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_ENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x686730)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_FROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x686710)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_HASANIM_OFFSET UNITYSDK_OFFSET(0x383860)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_OVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_SCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x2EF960)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_TARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_TARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x28B580)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_ALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x34DBE0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_ENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x686740)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_FROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x686720)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_HASANIM_OFFSET UNITYSDK_OFFSET(0x4B0C60)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x6866F0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_OVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x686700)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_SCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x485B70)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_TARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_TARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x381830)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x686840)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x686A50)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x6869D0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHNOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x686950)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHOVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x6867B0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHSCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x6868D0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x686780)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x686750)

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetContext_TypeDefinitionIndex = 54146;

struct alignas(8) MonoUITableScrollV2_ScrollToTargetContext
{
	::System::Int32 _targetDataIndex_k__BackingField; // 0x10
	::UnityEngine::RectTransform* _targetRectTransform_k__BackingField; // 0x18
	::System::Boolean _hasAnim_k__BackingField; // 0x20
	::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType _alignParamType_k__BackingField; // 0x24
	::System::Boolean _notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0_k__BackingField; // 0x28
	::MonoUITableScrollV2_ScrollParams_AlignParam* _overrideAlignParam_k__BackingField; // 0x30
	::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection _scrollDirection_k__BackingField; // 0x38
	::System::Nullable_1<::System::Int32> _fromDataIndex_k__BackingField; // 0x3C
	::System::Nullable_1<::System::Boolean> _EnableOverIndex_k__BackingField; // 0x44

	::System::Void _ctor(::System::Int32 targetDataIndex, ::System::Boolean hasAnim)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT__CTOR_OFFSET))(this, targetDataIndex, hasAnim);
	}

	::System::Void _ctor_1(::UnityEngine::RectTransform* targetRectTransform, ::System::Boolean hasAnim)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT__CTOR_1_OFFSET))(this, targetRectTransform, hasAnim);
	}

	::System::Int32 get_targetDataIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_TARGETDATAINDEX_OFFSET))(this);
	}

	::System::Void set_targetDataIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_TARGETDATAINDEX_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get_targetRectTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_TARGETRECTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_targetRectTransform(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_TARGETRECTTRANSFORM_OFFSET))(this, value);
	}

	::System::Boolean get_hasAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_HASANIM_OFFSET))(this);
	}

	::System::Void set_hasAnim(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_HASANIM_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType get_alignParamType()
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_ALIGNPARAMTYPE_OFFSET))(this);
	}

	::System::Void set_alignParamType(::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_ALIGNPARAMTYPE_OFFSET))(this, value);
	}

	::System::Boolean get_notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this);
	}

	::System::Void set_notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_ScrollParams_AlignParam* get_overrideAlignParam()
	{
		return ((::MonoUITableScrollV2_ScrollParams_AlignParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_OVERRIDEALIGNPARAM_OFFSET))(this);
	}

	::System::Void set_overrideAlignParam(::MonoUITableScrollV2_ScrollParams_AlignParam* value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_OVERRIDEALIGNPARAM_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection get_scrollDirection()
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_SCROLLDIRECTION_OFFSET))(this);
	}

	::System::Void set_scrollDirection(::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_SCROLLDIRECTION_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Int32> get_fromDataIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_FROMDATAINDEX_OFFSET))(this);
	}

	::System::Void set_fromDataIndex(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_FROMDATAINDEX_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Boolean> get_EnableOverIndex()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_GET_ENABLEOVERINDEX_OFFSET))(this);
	}

	::System::Void set_EnableOverIndex(::System::Nullable_1<::System::Boolean> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_SET_ENABLEOVERINDEX_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithOverrideAlignParam(::MonoUITableScrollV2_ScrollParams_AlignParam* overrideAlignParam)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHOVERRIDEALIGNPARAM_OFFSET))(this, overrideAlignParam);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithAlignParamType(::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType alignParamType)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext_AlignParamType))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHALIGNPARAMTYPE_OFFSET))(this, alignParamType);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithScrollDirection(::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection scrollDirection)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHSCROLLDIRECTION_OFFSET))(this, scrollDirection);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithNotInterruptPreScrollIfCurNoNeedScroll_TempFor1_0(::System::Boolean tempParam)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHNOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this, tempParam);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithFromDataIndex(::System::Nullable_1<::System::Int32> fromDataIndex)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHFROMDATAINDEX_OFFSET))(this, fromDataIndex);
	}

	::MonoUITableScrollV2_ScrollToTargetContext WithEnableOverIndex(::System::Boolean enableOverIndex)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETCONTEXT_WITHENABLEOVERINDEX_OFFSET))(this, enableOverIndex);
	}
};
