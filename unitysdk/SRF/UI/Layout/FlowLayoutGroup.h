#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18470360)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18470E80)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x18470F40)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET UNITYSDK_OFFSET(0x18470450)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISCENTERALIGN_OFFSET UNITYSDK_OFFSET(0x18470300)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISLOWERALIGN_OFFSET UNITYSDK_OFFSET(0x18470350)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISMIDDLEALIGN_OFFSET UNITYSDK_OFFSET(0x18470340)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISRIGHTALIGN_OFFSET UNITYSDK_OFFSET(0x18470320)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_LAYOUTROW_OFFSET UNITYSDK_OFFSET(0x18470F80)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x184704E0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18470DC0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUT_OFFSET UNITYSDK_OFFSET(0x18470590)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18471650)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int FlowLayoutGroup_TypeDefinitionIndex = 27689;

	class FlowLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* _rowList; // 0x60
		::System::Single _layoutHeight; // 0x68
		::System::Boolean ChildForceExpandHeight; // 0x6C
		::System::Boolean ChildForceExpandWidth; // 0x6D
		::System::Single Spacing; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCenterAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISCENTERALIGN_OFFSET))(this);
		}

		::System::Boolean get_IsRightAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISRIGHTALIGN_OFFSET))(this);
		}

		::System::Boolean get_IsMiddleAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISMIDDLEALIGN_OFFSET))(this);
		}

		::System::Boolean get_IsLowerAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISLOWERALIGN_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single SetLayout(::System::Single width, ::System::Int32 axis, ::System::Boolean layoutInput)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUT_OFFSET))(this, width, axis, layoutInput);
		}

		::System::Single CalculateRowVerticalOffset(::System::Single groupHeight, ::System::Single yOffset, ::System::Single currentRowHeight)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET))(this, groupHeight, yOffset, currentRowHeight);
		}

		::System::Void LayoutRow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* contents, ::System::Single rowWidth, ::System::Single rowHeight, ::System::Single maxWidth, ::System::Single xOffset, ::System::Single yOffset, ::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_LAYOUTROW_OFFSET))(this, contents, rowWidth, rowHeight, maxWidth, xOffset, yOffset, axis);
		}

		::System::Single GetGreatestMinimumChildWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET))(this);
		}
	};
}
