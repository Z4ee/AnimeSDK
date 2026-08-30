#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1EC441B0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1EC44C50)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x1EC44CA0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET UNITYSDK_OFFSET(0x1EC44230)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISCENTERALIGN_OFFSET UNITYSDK_OFFSET(0x1EC44150)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISLOWERALIGN_OFFSET UNITYSDK_OFFSET(0x1EC441A0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISMIDDLEALIGN_OFFSET UNITYSDK_OFFSET(0x1EC44190)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GET_ISRIGHTALIGN_OFFSET UNITYSDK_OFFSET(0x1EC44170)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_LAYOUTROW_OFFSET UNITYSDK_OFFSET(0x1EC44CE0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1EC442D0)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1EC44C00)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUT_OFFSET UNITYSDK_OFFSET(0x1EC44320)
#define SRF_UI_LAYOUT_FLOWLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC45590)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int FlowLayoutGroup_TypeDefinitionIndex = 34733;

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

		::System::Single SetLayout(::System::Single a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_SETLAYOUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single CalculateRowVerticalOffset(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_CALCULATEROWVERTICALOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LayoutRow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_LAYOUTROW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single GetGreatestMinimumChildWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_FLOWLAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET))(this);
		}
	};
}
