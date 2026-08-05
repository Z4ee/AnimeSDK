#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_BaseScrollLogic.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_VERTICALLOGIC_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET UNITYSDK_OFFSET(0x11671950)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GETCONTENTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x116719B0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11670330)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x11670160)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11670500)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSIZE_OFFSET UNITYSDK_OFFSET(0x116700A0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x116716C0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_PADDINGEND_OFFSET UNITYSDK_OFFSET(0x11670A00)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_PADDINGSTART_OFFSET UNITYSDK_OFFSET(0x116707D0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SCROLLBARVALUE_OFFSET UNITYSDK_OFFSET(0x11671100)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SPACEATAXIS_OFFSET UNITYSDK_OFFSET(0x11670C30)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SPACEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x11670EE0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_VIEWRECTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x116706D0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_GET_VIEWRECTSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x11670750)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SETSCROLLBARVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x116714C0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11670420)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x11670250)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x116705F0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11671740)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_PADDINGEND_OFFSET UNITYSDK_OFFSET(0x11670A40)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_PADDINGSTART_OFFSET UNITYSDK_OFFSET(0x11670810)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SCROLLBARVALUE_OFFSET UNITYSDK_OFFSET(0x11671280)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SPACEATAXIS_OFFSET UNITYSDK_OFFSET(0x11670CD0)
#define MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SPACEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x11670F90)
#define MONOUITABLESCROLLV2_VERTICALLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x11671A40)

inline static constexpr unsigned int MonoUITableScrollV2_VerticalLogic_TypeDefinitionIndex = 75015;

class MonoUITableScrollV2_VerticalLogic : public ::MonoUITableScrollV2_BaseScrollLogic
{
public:
	::System::Single _scrollBarCurrentValue; // 0x1F0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC__CTOR_OFFSET))(this);
	}

	::System::Single get_ContentSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSIZE_OFFSET))(this);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignStartPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignStartPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET))(this, value);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignCurrentPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignCurrentPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET))(this, value);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignTargetPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignTargetPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET))(this, value);
	}

	::System::Single get_ViewRectSizeAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_VIEWRECTSIZEATAXIS_OFFSET))(this);
	}

	::System::Single get_ViewRectSizeAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_VIEWRECTSIZEATOTHERAXIS_OFFSET))(this);
	}

	::System::Int32 get_PaddingStart()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_PADDINGSTART_OFFSET))(this);
	}

	::System::Void set_PaddingStart(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_PADDINGSTART_OFFSET))(this, value);
	}

	::System::Int32 get_PaddingEnd()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_PADDINGEND_OFFSET))(this);
	}

	::System::Void set_PaddingEnd(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_PADDINGEND_OFFSET))(this, value);
	}

	::System::Single get_SpaceAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SPACEATAXIS_OFFSET))(this);
	}

	::System::Void set_SpaceAtAxis(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SPACEATAXIS_OFFSET))(this, value);
	}

	::System::Single get_SpaceAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SPACEATOTHERAXIS_OFFSET))(this);
	}

	::System::Void set_SpaceAtOtherAxis(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SPACEATOTHERAXIS_OFFSET))(this, value);
	}

	::System::Single get_ScrollBarValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_SCROLLBARVALUE_OFFSET))(this);
	}

	::System::Void set_ScrollBarValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_SCROLLBARVALUE_OFFSET))(this, value);
	}

	::System::Void SetScrollBarValueWithoutNotify(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SETSCROLLBARVALUEWITHOUTNOTIFY_OFFSET))(this, value);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_CurrentPosition()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GET_CURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_CurrentPosition(::NAPScrollView::DataStruct::ScrollFloat value)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_SET_CURRENTPOSITION_OFFSET))(this, value);
	}

	::NAPScrollView::DataStruct::ScrollFloat ConvertVector2ToScrollFloat(::UnityEngine::Vector2 value)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET))(this, value);
	}

	::System::Single GetContentSizeAtAxis(::UnityEngine::RectTransform* transform)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_VERTICALLOGIC_GETCONTENTSIZEATAXIS_OFFSET))(this, transform);
	}
};
