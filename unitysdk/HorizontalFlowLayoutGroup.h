#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HorizontalFlowLayoutGroup_ChildForceExpandParam.h"
#include "unitysdk/HorizontalFlowLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define HORIZONTALFLOWLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x145CF8B0)
#define HORIZONTALFLOWLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x145D0650)
#define HORIZONTALFLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x145D06D0)
#define HORIZONTALFLOWLAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x145D1060)
#define HORIZONTALFLOWLAYOUTGROUP_GETGREATESTMINCOLWIDTH_OFFSET UNITYSDK_OFFSET(0x145CF9F0)
#define HORIZONTALFLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET UNITYSDK_OFFSET(0x145D0FA0)
#define HORIZONTALFLOWLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x145CF590)
#define HORIZONTALFLOWLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x145CF670)
#define HORIZONTALFLOWLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x145CF4B0)
#define HORIZONTALFLOWLAYOUTGROUP_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x145CF420)
#define HORIZONTALFLOWLAYOUTGROUP_GET_ISCENTERALIGN_OFFSET UNITYSDK_OFFSET(0x145CF750)
#define HORIZONTALFLOWLAYOUTGROUP_GET_ISLOWERALIGN_OFFSET UNITYSDK_OFFSET(0x145CF860)
#define HORIZONTALFLOWLAYOUTGROUP_GET_ISMIDDLEALIGN_OFFSET UNITYSDK_OFFSET(0x145CF810)
#define HORIZONTALFLOWLAYOUTGROUP_GET_ISRIGHTALIGN_OFFSET UNITYSDK_OFFSET(0x145CF7B0)
#define HORIZONTALFLOWLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x145CF360)
#define HORIZONTALFLOWLAYOUTGROUP_LAYOUTROW_OFFSET UNITYSDK_OFFSET(0x145D07F0)
#define HORIZONTALFLOWLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x145CFB30)
#define HORIZONTALFLOWLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x145D05D0)
#define HORIZONTALFLOWLAYOUTGROUP_SETLAYOUT_OFFSET UNITYSDK_OFFSET(0x145CFBB0)
#define HORIZONTALFLOWLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x145CF5A0)
#define HORIZONTALFLOWLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x145CF680)
#define HORIZONTALFLOWLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x145CF4C0)
#define HORIZONTALFLOWLAYOUTGROUP_SET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x145CF430)
#define HORIZONTALFLOWLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x145CF370)
#define HORIZONTALFLOWLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x145D10A0)
#define HORIZONTALFLOWLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x145D1140)
#define HORIZONTALFLOWLAYOUTGROUP___BASE_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x145D1150)

inline static constexpr unsigned int HorizontalFlowLayoutGroup_TypeDefinitionIndex = 87271;

class HorizontalFlowLayoutGroup : public ::UnityEngine::UI::LayoutGroup
{
public:
	::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* _rowList; // 0x58
	::System::Single _layoutHeight; // 0x60
	::UnityEngine::Vector2 _spacing; // 0x64
	::HorizontalFlowLayoutGroup_Constraint _constraint; // 0x6C
	::System::Int32 _constraintCount; // 0x70
	::HorizontalFlowLayoutGroup_ChildForceExpandParam _childForceExpandParam; // 0x74
	::System::Int32 lastCellCountX; // 0x78
	::System::Int32 lastCellCountY; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 get_Spacing()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_SPACING_OFFSET))(this);
	}

	::System::Void set_Spacing(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SET_SPACING_OFFSET))(this, value);
	}

	::HorizontalFlowLayoutGroup_Constraint get_constraint()
	{
		return ((::HorizontalFlowLayoutGroup_Constraint(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_CONSTRAINT_OFFSET))(this);
	}

	::System::Void set_constraint(::HorizontalFlowLayoutGroup_Constraint value)
	{
		return ((::System::Void(*)(::PVOID, ::HorizontalFlowLayoutGroup_Constraint))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SET_CONSTRAINT_OFFSET))(this, value);
	}

	::System::Int32 get_constraintCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET))(this);
	}

	::System::Void set_constraintCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_ChildForceExpandHeight()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this);
	}

	::System::Void set_ChildForceExpandHeight(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this, value);
	}

	::System::Boolean get_ChildForceExpandWidth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET))(this);
	}

	::System::Void set_ChildForceExpandWidth(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET))(this, value);
	}

	::System::Boolean get_IsCenterAlign()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_ISCENTERALIGN_OFFSET))(this);
	}

	::System::Boolean get_IsRightAlign()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_ISRIGHTALIGN_OFFSET))(this);
	}

	::System::Boolean get_IsMiddleAlign()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_ISMIDDLEALIGN_OFFSET))(this);
	}

	::System::Boolean get_IsLowerAlign()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GET_ISLOWERALIGN_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void SetLayoutHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void SetLayoutVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Single SetLayout(::System::Single width, ::System::Int32 axis, ::System::Boolean layoutInput)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_SETLAYOUT_OFFSET))(this, width, axis, layoutInput);
	}

	::System::Single CalculateRowVerticalOffset(::System::Single groupHeight, ::System::Single yOffset, ::System::Single currentRowHeight)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET))(this, groupHeight, yOffset, currentRowHeight);
	}

	::System::Void LayoutRow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* contents, ::System::Single rowWidth, ::System::Single rowHeight, ::System::Single maxWidth, ::System::Single xOffset, ::System::Single yOffset, ::System::Int32 axis)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_LAYOUTROW_OFFSET))(this, contents, rowWidth, rowHeight, maxWidth, xOffset, yOffset, axis);
	}

	::System::Single GetGreatestMinimumChildWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET))(this);
	}

	::System::Single GetGreatestMinColWidth(::System::Int32 minColCount)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GETGREATESTMINCOLWIDTH_OFFSET))(this, minColCount);
	}

	::UnityEngine::Vector2Int GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP_GETCOLROW_OFFSET))(this);
	}

	::System::Void __base_CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::UnityEngine::Vector2Int __base_GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + HORIZONTALFLOWLAYOUTGROUP___BASE_GETCOLROW_OFFSET))(this);
	}
};
