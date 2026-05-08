#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_BaseScrollLogic.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET UNITYSDK_OFFSET(0x11346DF0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GETCONTENTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x11346E40)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11345810)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x11345650)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x113459C0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSIZE_OFFSET UNITYSDK_OFFSET(0x113455A0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11346BB0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_PADDINGEND_OFFSET UNITYSDK_OFFSET(0x11345EB0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_PADDINGSTART_OFFSET UNITYSDK_OFFSET(0x11345C80)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SCROLLBARVALUE_OFFSET UNITYSDK_OFFSET(0x113465B0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SPACEATAXIS_OFFSET UNITYSDK_OFFSET(0x113460E0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SPACEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x113463A0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_VIEWRECTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x11345B80)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_VIEWRECTSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x11345C00)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SETSCROLLBARVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x113469A0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x113458E0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x11345730)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11345AA0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x11346C30)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_PADDINGEND_OFFSET UNITYSDK_OFFSET(0x11345EF0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_PADDINGSTART_OFFSET UNITYSDK_OFFSET(0x11345CC0)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SCROLLBARVALUE_OFFSET UNITYSDK_OFFSET(0x11346750)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SPACEATAXIS_OFFSET UNITYSDK_OFFSET(0x11346190)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SPACEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x11346450)
#define MONOUITABLESCROLLV2_HORIZONTALLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x11346ED0)

inline static constexpr unsigned int MonoUITableScrollV2_HorizontalLogic_TypeDefinitionIndex = 54145;

class MonoUITableScrollV2_HorizontalLogic : public ::MonoUITableScrollV2_BaseScrollLogic
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC__CTOR_OFFSET))(this);
	}

	::System::Single get_ContentSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSIZE_OFFSET))(this);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignStartPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignStartPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNSTARTPOSITION_OFFSET))(this, value);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignCurrentPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignCurrentPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNCURRENTPOSITION_OFFSET))(this, value);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> get_ContentSelectAlignTargetPosition()
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET))(this);
	}

	::System::Void set_ContentSelectAlignTargetPosition(::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CONTENTSELECTALIGNTARGETPOSITION_OFFSET))(this, value);
	}

	::System::Single get_ViewRectSizeAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_VIEWRECTSIZEATAXIS_OFFSET))(this);
	}

	::System::Single get_ViewRectSizeAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_VIEWRECTSIZEATOTHERAXIS_OFFSET))(this);
	}

	::System::Int32 get_PaddingStart()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_PADDINGSTART_OFFSET))(this);
	}

	::System::Void set_PaddingStart(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_PADDINGSTART_OFFSET))(this, value);
	}

	::System::Int32 get_PaddingEnd()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_PADDINGEND_OFFSET))(this);
	}

	::System::Void set_PaddingEnd(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_PADDINGEND_OFFSET))(this, value);
	}

	::System::Single get_SpaceAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SPACEATAXIS_OFFSET))(this);
	}

	::System::Void set_SpaceAtAxis(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SPACEATAXIS_OFFSET))(this, value);
	}

	::System::Single get_SpaceAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SPACEATOTHERAXIS_OFFSET))(this);
	}

	::System::Void set_SpaceAtOtherAxis(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SPACEATOTHERAXIS_OFFSET))(this, value);
	}

	::System::Single get_ScrollBarValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_SCROLLBARVALUE_OFFSET))(this);
	}

	::System::Void set_ScrollBarValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_SCROLLBARVALUE_OFFSET))(this, value);
	}

	::System::Void SetScrollBarValueWithoutNotify(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SETSCROLLBARVALUEWITHOUTNOTIFY_OFFSET))(this, value);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_CurrentPosition()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GET_CURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_CurrentPosition(::NAPScrollView::DataStruct::ScrollFloat value)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_SET_CURRENTPOSITION_OFFSET))(this, value);
	}

	::NAPScrollView::DataStruct::ScrollFloat ConvertVector2ToScrollFloat(::UnityEngine::Vector2 value)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET))(this, value);
	}

	::System::Single GetContentSizeAtAxis(::UnityEngine::RectTransform* transform)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_HORIZONTALLOGIC_GETCONTENTSIZEATAXIS_OFFSET))(this, transform);
	}
};
