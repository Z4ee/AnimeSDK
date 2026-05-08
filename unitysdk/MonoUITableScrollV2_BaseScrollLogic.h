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

#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_CHECKVALUEVALID_OFFSET UNITYSDK_OFFSET(0x187C6500)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x187C4C00)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x187C34A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x187C2CE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x187C5500)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTEND_OFFSET UNITYSDK_OFFSET(0x187C6120)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GETVIEWRECTSTART_OFFSET UNITYSDK_OFFSET(0x187C5D90)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x10D94DC0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CELLSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x10D94DE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x187C4030)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTENDPOSITION_OFFSET UNITYSDK_OFFSET(0x187C3D70)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_CONTENTSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x187C3D40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x187C64A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXISFORFILLVIEWRECT_OFFSET UNITYSDK_OFFSET(0x10D94E80)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATAXIS_OFFSET UNITYSDK_OFFSET(0x10D94E40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXISFORFILLVIEWRECT_OFFSET UNITYSDK_OFFSET(0x10D94EA0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMCOUNTATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x10D94E60)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x10D94F00)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x10D94E00)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_ITEMSIZEATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x10D94E20)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x10D95250)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNTFOREMPTYPADDING_OFFSET UNITYSDK_OFFSET(0x10D94EE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_PAGECOUNT_OFFSET UNITYSDK_OFFSET(0x10D94EC0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARACTIVE_OFFSET UNITYSDK_OFFSET(0x10D957C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBARSIZE_OFFSET UNITYSDK_OFFSET(0x10D953C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLBAR_OFFSET UNITYSDK_OFFSET(0x10D94BC0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_SCROLLVALIDSIZE_OFFSET UNITYSDK_OFFSET(0x187C64C0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_TOTALSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x10D95060)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITYLIST_OFFSET UNITYSDK_OFFSET(0x10D95330)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x10D95270)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VIEWRECTBOUNDS_OFFSET UNITYSDK_OFFSET(0x187C4060)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTEND_OFFSET UNITYSDK_OFFSET(0x187C5B40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSIZE_OFFSET UNITYSDK_OFFSET(0x187C5C90)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_GET_VISUALVIEWRECTSTART_OFFSET UNITYSDK_OFFSET(0x187C59F0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_INIT_OFFSET UNITYSDK_OFFSET(0x10D94BE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_LOCALTOWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x187C5600)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MARKCELLLAYOUTDATADIRTY_OFFSET UNITYSDK_OFFSET(0x10D94C40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x187C4770)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0x187C57A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x187C58A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x187C2FE0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONSCROLLPOINTERUP_OFFSET UNITYSDK_OFFSET(0x187C3240)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_REGISTERSCROLLBARONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x187C2DC0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SETDIRTYFORCACHEBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x187C40A0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x187C64B0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x10D94FF0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x10D95260)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARACTIVE_OFFSET UNITYSDK_OFFSET(0x187C2B40)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBARSIZE_OFFSET UNITYSDK_OFFSET(0x10D95560)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_SET_SCROLLBAR_OFFSET UNITYSDK_OFFSET(0x10D94BD0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYCACHECELLDATA_OFFSET UNITYSDK_OFFSET(0x10D94C80)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDCONTENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x187C4150)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC_TRYREBUILDVIEWRECTBOUNDS_OFFSET UNITYSDK_OFFSET(0x187C4EF0)
#define MONOUITABLESCROLLV2_BASESCROLLLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x187C6570)

inline static constexpr unsigned int MonoUITableScrollV2_BaseScrollLogic_TypeDefinitionIndex = 54055;

class MonoUITableScrollV2_BaseScrollLogic : public ::System::Object
{
public:
	::MonoScrollBarEx* _ScrollBar_k__BackingField; // 0x10
	::MonoUITableScrollV2* _scroll; // 0x18
	::System::Single _cellSizeAtAxis; // 0x20
	::System::Nullable_1<::System::Single> _contentSelectAlignCurrentPosition; // 0x24
	::System::Single _itemSizeAtOtherAxis; // 0x2C
	::System::Boolean _viewRectBounds_valid; // 0x30
	::System::Boolean _lastContentRect_valid; // 0x31
	::System::Boolean _cellDataCahceValid; // 0x32
	::System::Boolean _lastViewRectWorldToLocalMatrix_valid; // 0x33
	::System::Single _LastDelta_k__BackingField; // 0x34
	::UnityEngine::Matrix4x4 _lastViewRectLocalToWorldMatrix; // 0x38
	::System::Int32 _itemCountAtOtherAxis; // 0x78
	::NAPScrollView::DataStruct::ScrollBounds _contentBounds; // 0x7C
	::NAPScrollView::DataStruct::ScrollFloat _EndValue_k__BackingField; // 0x98
	::System::Nullable_1<::System::Single> _contentSelectAlignStartPosition; // 0xA0
	::System::Nullable_1<::System::Single> _contentSelectAlignTargetPosition; // 0xA8
	::System::Single _ItemTotalSize; // 0xB0
	::System::Single _itemSizeAtAxis; // 0xB4
	::UnityEngine::Matrix4x4 _lastViewRectWorldToLocalMatrix; // 0xB8
	::System::Int32 _pageCountForEmptyPadding; // 0xF8
	::System::Single _cellSizeAtOtherAxis; // 0xFC
	::System::Int32 _itemCountAtOtherAxisForFillViewRect; // 0x100
	::System::Int32 _itemCountAtAxis; // 0x104
	::System::Int32 _itemCountAtAxisForFillViewRect; // 0x108
	::NAPScrollView::DataStruct::ScrollBounds _viewRectBounds; // 0x10C
	::UnityEngine::Matrix4x4 _lastContentLocalToWorldMatrix; // 0x128
	::UnityEngine::Rect _lastContentRect; // 0x168
	::System::Int32 _pageCount; // 0x178
	::System::Boolean _contentBounds_valid; // 0x17C
	::System::Boolean _lastViewRectRect_valid; // 0x17D
	::System::Boolean _lastContentLocalToWorldMatrix_valid; // 0x17E
	::System::Boolean _lastViewRectLocalToWorldMatrix_valid; // 0x17F
	::UnityEngine::Rect _lastViewRectRect; // 0x180

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
