#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_B4B6CE29D3ABB5E4;
namespace SuperScrollView { class FlexibleGridConfData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_GRIDPOSMGR_CLEARROWS_OFFSET UNITYSDK_OFFSET(0xB95B470)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xB95B8E0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOUNT_OFFSET UNITYSDK_OFFSET(0xB95B6B0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWINDEXBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB95BA40)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWITEMPOS_OFFSET UNITYSDK_OFFSET(0xB95B840)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWPREFABINDEXS_OFFSET UNITYSDK_OFFSET(0xB95B700)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWSTARTINDEX_OFFSET UNITYSDK_OFFSET(0xB95B7A0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWWIDTHANDHEIGHT_OFFSET UNITYSDK_OFFSET(0xB95B990)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0xB95AF90)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_MAXCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xB95AF70)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xB95AFB0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_INIT_OFFSET UNITYSDK_OFFSET(0xB95AFC0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SETITEMINDEXLIST_OFFSET UNITYSDK_OFFSET(0xB95B060)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SET_ISINIT_OFFSET UNITYSDK_OFFSET(0xB95AFA0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SET_MAXCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xB95AF80)
#define SUPERSCROLLVIEW_GRIDPOSMGR__ADDROW_OFFSET UNITYSDK_OFFSET(0xB95B4E0)
#define SUPERSCROLLVIEW_GRIDPOSMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xB95BB50)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridPosMgr_TypeDefinitionIndex = 44380;

	class GridPosMgr : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_B4B6CE29D3ABB5E4*>* _GridRows; // 0x10
		::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>* _PrefabConfDatas; // 0x18
		::System::Boolean _IsInit_k__BackingField; // 0x20
		::System::Int32 _MaxColumnCount_k__BackingField; // 0x24
		::System::Single _ContentWidth; // 0x28
		::UnityEngine::Vector4 _Padding; // 0x2C
		::System::Single _itemSpacing; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_MAXCOLUMNCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxColumnCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SET_MAXCOLUMNCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_ISINIT_OFFSET))(this);
		}

		::System::Void set_IsInit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SET_ISINIT_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_WIDTH_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>* PrefabConfDataList, ::System::Single contentWidth, ::System::Single itemSpacing, ::UnityEngine::Vector4 padding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>*, ::System::Single, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_INIT_OFFSET))(this, PrefabConfDataList, contentWidth, itemSpacing, padding);
		}

		::System::Void SetItemIndexList(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SETITEMINDEXLIST_OFFSET))(this, indexList);
		}

		::System::Void _AddRow(::Class_1_B4B6CE29D3ABB5E4* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B4B6CE29D3ABB5E4*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR__ADDROW_OFFSET))(this, row);
		}

		::System::Int32 GetRowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetRowPrefabIndexs(::System::Int32 rowIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWPREFABINDEXS_OFFSET))(this, rowIndex);
		}

		::System::Int32 GetRowStartIndex(::System::Int32 rowIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWSTARTINDEX_OFFSET))(this, rowIndex);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetRowItemPos(::System::Int32 rowIndex)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWITEMPOS_OFFSET))(this, rowIndex);
		}

		::System::Int32 GetRowColumnCount(::System::Int32 rowIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOLUMNCOUNT_OFFSET))(this, rowIndex);
		}

		::UnityEngine::Vector2 GetRowWidthAndHeight(::System::Int32 rowIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWWIDTHANDHEIGHT_OFFSET))(this, rowIndex);
		}

		::System::Int32 GetRowIndexByItemIndex(::System::Int32 itemIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWINDEXBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::System::Void ClearRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_CLEARROWS_OFFSET))(this);
		}
	};
}
