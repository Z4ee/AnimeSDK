#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_BaseScrollLogic_BoundsDirtyType.h"
#include "unitysdk/MonoUITableScrollV2_BaseScrollLogic_BoundsType.h"
#include "unitysdk/MonoUITableScrollV2_ViewRectFlag.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoScrollBarEx;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_CHECKVALUEVALID_OFFSET UNITYSDK_OFFSET(0x19510A30)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x19512CF0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x195115B0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x19510DF0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x19513600)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTEND_OFFSET UNITYSDK_OFFSET(0x19514220)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTSTART_OFFSET UNITYSDK_OFFSET(0x19513E90)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x19510040)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x19510060)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x19512130)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTENDPOSITION_OFFSET UNITYSDK_OFFSET(0x19511E80)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x19511E50)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x195145A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXISFORFILLVIEWRECT_OFFSET UNITYSDK_OFFSET(0x19510100)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXIS_OFFSET UNITYSDK_OFFSET(0x195100C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXISFORFILLVIEWRECT_OFFSET UNITYSDK_OFFSET(0x19510120)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x195100E0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x19510180)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x19510080)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x195100A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x195104C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNTFOREMPTYPADDING_OFFSET UNITYSDK_OFFSET(0x19510160)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNT_OFFSET UNITYSDK_OFFSET(0x19510140)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARACTIVE_OFFSET UNITYSDK_OFFSET(0x19510AA0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARSIZE_OFFSET UNITYSDK_OFFSET(0x19510630)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1950FE50)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLVALIDSIZE_OFFSET UNITYSDK_OFFSET(0x195145C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_TOTALSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x195102D0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITYLIST_OFFSET UNITYSDK_OFFSET(0x195105A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x195104E0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VIEWRECTBOUNDS_OFFSET UNITYSDK_OFFSET(0x19512170)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTEND_OFFSET UNITYSDK_OFFSET(0x19513C40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSIZE_OFFSET UNITYSDK_OFFSET(0x19513D90)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSTART_OFFSET UNITYSDK_OFFSET(0x19513AF0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_INIT_OFFSET UNITYSDK_OFFSET(0x1950FE70)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_LOCALTOWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x19513700)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MARKCELLLAYOUTDATADIRTY_OFFSET UNITYSDK_OFFSET(0x1950FED0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x19512860)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0x195138A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x195139A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x195110F0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19511350)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19510ED0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SETDIRTYFORCACHEBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x195121A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x195145B0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x19510260)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x195104D0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARACTIVE_OFFSET UNITYSDK_OFFSET(0x19510C50)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARSIZE_OFFSET UNITYSDK_OFFSET(0x195107D0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1950FE60)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYCACHECELLDATA_OFFSET UNITYSDK_OFFSET(0x1950FF10)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDCONTENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x19512250)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDVIEWRECTBOUNDS_OFFSET UNITYSDK_OFFSET(0x19512FE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19514600)

inline static constexpr unsigned int MonoUITableScrollV2_BaseScrollLogic_TypeDefinitionIndex = 70007;

class MonoUITableScrollV2_BaseScrollLogic : public ::System::Object
{
public:
	::MonoUITableScrollV2* _scroll; // 0x10
	::MonoScrollBarEx* _ScrollBar_k__BackingField; // 0x18
	::System::Single _cellSizeAtAxis; // 0x20
	::NAPScrollView::DataStruct::ScrollBounds _viewRectBounds; // 0x24
	::System::Single _cellSizeAtOtherAxis; // 0x40
	::System::Int32 _itemCountAtAxis; // 0x44
	::System::Single _itemSizeAtOtherAxis; // 0x48
	::System::Single _LastDelta_k__BackingField; // 0x4C
	::System::Boolean _cellDataCahceValid; // 0x50
	::System::Boolean _contentBounds_valid; // 0x51
	::System::Boolean _lastContentRect_valid; // 0x52
	::System::Boolean _lastViewRectWorldToLocalMatrix_valid; // 0x53
	::System::Nullable_1<::System::Single> _contentSelectAlignTargetPosition; // 0x54
	::System::Single _ItemTotalSize; // 0x5C
	::System::Int32 _itemCountAtOtherAxis; // 0x60
	::UnityEngine::Rect _lastContentRect; // 0x64
	::System::Int32 _itemCountAtOtherAxisForFillViewRect; // 0x74
	::UnityEngine::Matrix4x4 _lastViewRectLocalToWorldMatrix; // 0x78
	::System::Single _itemSizeAtAxis; // 0xB8
	::UnityEngine::Rect _lastViewRectRect; // 0xBC
	::System::Nullable_1<::System::Single> _contentSelectAlignStartPosition; // 0xCC
	::UnityEngine::Matrix4x4 _lastContentLocalToWorldMatrix; // 0xD4
	::NAPScrollView::DataStruct::ScrollFloat _EndValue_k__BackingField; // 0x114
	::NAPScrollView::DataStruct::ScrollBounds _contentBounds; // 0x11C
	::UnityEngine::Matrix4x4 _lastViewRectWorldToLocalMatrix; // 0x138
	::System::Nullable_1<::System::Single> _contentSelectAlignCurrentPosition; // 0x178
	::System::Int32 _itemCountAtAxisForFillViewRect; // 0x180
	::System::Int32 _pageCountForEmptyPadding; // 0x184
	::System::Int32 _pageCount; // 0x188
	::System::Boolean _lastViewRectRect_valid; // 0x18C
	::System::Boolean _lastContentLocalToWorldMatrix_valid; // 0x18D
	::System::Boolean _lastViewRectLocalToWorldMatrix_valid; // 0x18E
	::System::Boolean _viewRectBounds_valid; // 0x18F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC__CTOR_OFFSET))(this);
	}

	::MonoScrollBarEx* get_ScrollBar()
	{
		return ((::MonoScrollBarEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBAR_OFFSET))(this);
	}

	::System::Void set_ScrollBar(::MonoScrollBarEx* value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoScrollBarEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBAR_OFFSET))(this, value);
	}

	::System::Void Init(::MonoUITableScrollV2* scroll, ::MonoScrollBarEx* scrollBar)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::MonoScrollBarEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_INIT_OFFSET))(this, scroll, scrollBar);
	}

	::System::Void MarkCellLayoutDataDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_MARKCELLLAYOUTDATADIRTY_OFFSET))(this);
	}

	::System::Void TryCacheCellData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYCACHECELLDATA_OFFSET))(this);
	}

	::System::Single get_CellSizeAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATAXIS_OFFSET))(this);
	}

	::System::Single get_CellSizeAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATOTHERAXIS_OFFSET))(this);
	}

	::System::Single get_ItemSizeAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXIS_OFFSET))(this);
	}

	::System::Single get_ItemSizeAtOtherAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATOTHERAXIS_OFFSET))(this);
	}

	::System::Int32 get_ItemCountAtAxis()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXIS_OFFSET))(this);
	}

	::System::Int32 get_ItemCountAtOtherAxis()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXIS_OFFSET))(this);
	}

	::System::Int32 get_ItemCountAtAxisForFillViewRect()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXISFORFILLVIEWRECT_OFFSET))(this);
	}

	::System::Int32 get_ItemCountAtOtherAxisForFillViewRect()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXISFORFILLVIEWRECT_OFFSET))(this);
	}

	::System::Int32 get_PageCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNT_OFFSET))(this);
	}

	::System::Int32 get_PageCountForEmptyPadding()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNTFOREMPTYPADDING_OFFSET))(this);
	}

	::System::Single get_ItemSizeAtAxisTotal()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXISTOTAL_OFFSET))(this);
	}

	::System::Void set_ItemSizeAtAxisTotal(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ITEMSIZEATAXISTOTAL_OFFSET))(this, value);
	}

	::System::Single get_TotalSizeAtAxis()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_TOTALSIZEATAXIS_OFFSET))(this);
	}

	::System::Single get_LastDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_LASTDELTA_OFFSET))(this);
	}

	::System::Void set_LastDelta(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_LASTDELTA_OFFSET))(this, value);
	}

	::System::Single get_Velocity()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITY_OFFSET))(this);
	}

	::System::Collections::Generic::Queue_1<::NAPScrollView::DataStruct::ScrollFloat>* get_VelocityList()
	{
		return ((::System::Collections::Generic::Queue_1<::NAPScrollView::DataStruct::ScrollFloat>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITYLIST_OFFSET))(this);
	}

	::System::Single get_ScrollBarSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARSIZE_OFFSET))(this);
	}

	::System::Void set_ScrollBarSize(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARSIZE_OFFSET))(this, value);
	}

	::System::Boolean get_ScrollBarActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARACTIVE_OFFSET))(this);
	}

	::System::Void set_ScrollBarActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARACTIVE_OFFSET))(this, value);
	}

	::System::Single GetItemSizeAtAxis(::System::Int32 dataIndex)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETITEMSIZEATAXIS_OFFSET))(this, dataIndex);
	}

	::System::Void RegisterScrollBarOnValueChanged(::UnityEngine::Events::UnityAction_1<::System::Single>* listener)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONVALUECHANGED_OFFSET))(this, listener);
	}

	::System::Void RegisterScrollBarOnScrollPointerDown(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* listener)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERDOWN_OFFSET))(this, listener);
	}

	::System::Void RegisterScrollBarOnScrollPointerUp(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* listener)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERUP_OFFSET))(this, listener);
	}

	::NAPScrollView::DataStruct::ScrollBounds GetChildBounds(::UnityEngine::RectTransform* childrecttrans)
	{
		return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_OFFSET))(this, childrecttrans);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_ContentStartPosition()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTSTARTPOSITION_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_ContentEndPosition()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTENDPOSITION_OFFSET))(this);
	}

	::System::Void SetDirtyForCacheBoundsInfo(::MonoUITableScrollV2_BaseScrollLogic_BoundsType boundsType, ::MonoUITableScrollV2_BaseScrollLogic_BoundsDirtyType dirtyType)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_BaseScrollLogic_BoundsType, ::MonoUITableScrollV2_BaseScrollLogic_BoundsDirtyType))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SETDIRTYFORCACHEBOUNDSINFO_OFFSET))(this, boundsType, dirtyType);
	}

	::System::Void TryRebuildContentBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDCONTENTBOUNDS_OFFSET))(this);
	}

	::System::Void TryRebuildViewRectBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDVIEWRECTBOUNDS_OFFSET))(this);
	}

	static ::NAPScrollView::DataStruct::ScrollBounds GetChildBounds_1(::UnityEngine::Rect& childRect, ::Il2CppArray<::UnityEngine::Vector3>* corners, ::UnityEngine::Matrix4x4& childLocalToWorld, ::UnityEngine::Matrix4x4& viewRectWorldToLocal, ::System::Boolean vertical)
	{
		return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::UnityEngine::Rect&, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_1_OFFSET))(childRect, corners, childLocalToWorld, viewRectWorldToLocal, vertical);
	}

	static ::System::Void GetLocalCorners(::UnityEngine::Rect& rect, ::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
	{
		return ((::System::Void(*)(::UnityEngine::Rect&, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETLOCALCORNERS_OFFSET))(rect, fourCornersArray);
	}

	static ::System::Void LocalToWorldCorners(::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray, ::UnityEngine::Matrix4x4& localToWorldMatrix)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_LOCALTOWORLDCORNERS_OFFSET))(fourCornersArray, localToWorldMatrix);
	}

	static ::System::Boolean Matrix4x4_Equals(::UnityEngine::Matrix4x4& a, ::UnityEngine::Matrix4x4& b)
	{
		return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_EQUALS_OFFSET))(a, b);
	}

	static ::UnityEngine::Vector3 Matrix4x4_MultiplyPoint(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector3& point)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT_OFFSET))(matrix, point);
	}

	static ::UnityEngine::Vector3 Matrix4x4_MultiplyPoint3x4(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector3& point)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET))(matrix, point);
	}

	::NAPScrollView::DataStruct::ScrollBounds get_ContentBounds()
	{
		return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTBOUNDS_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollBounds get_ViewRectBounds()
	{
		return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VIEWRECTBOUNDS_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_VisualViewRectStart()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSTART_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_VisualViewRectEnd()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTEND_OFFSET))(this);
	}

	::System::Single get_VisualViewRectSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSIZE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollFloat GetViewRectStart(::MonoUITableScrollV2_ViewRectFlag visualFlag)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::MonoUITableScrollV2_ViewRectFlag))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTSTART_OFFSET))(this, visualFlag);
	}

	::NAPScrollView::DataStruct::ScrollFloat GetViewRectEnd(::MonoUITableScrollV2_ViewRectFlag visualFlag)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::MonoUITableScrollV2_ViewRectFlag))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTEND_OFFSET))(this, visualFlag);
	}

	::NAPScrollView::DataStruct::ScrollFloat get_EndValue()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ENDVALUE_OFFSET))(this);
	}

	::System::Void set_EndValue(::NAPScrollView::DataStruct::ScrollFloat value)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ENDVALUE_OFFSET))(this, value);
	}

	::System::Single get_ScrollValidSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLVALIDSIZE_OFFSET))(this);
	}

	::System::Boolean CheckValueValid(::System::Single value)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_BASESCROLLLOGIC_CHECKVALUEVALID_OFFSET))(this, value);
	}
};
