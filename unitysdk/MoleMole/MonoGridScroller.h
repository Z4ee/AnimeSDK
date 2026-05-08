#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGridScroller_Enum_3_DF4E55107CEFED9F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoGridScroller_Class_3_EC572F192137EBDA; }
namespace MoleMole { class MonoScrollBar; }
namespace MoleMole { class MonoScrollBarAutoHide; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_MONOGRIDSCROLLER_ADDCHILDREN_OFFSET UNITYSDK_OFFSET(0x15838E90)
#define MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEXMULTI_OFFSET UNITYSDK_OFFSET(0x1583C0A0)
#define MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x1583BB50)
#define MOLEMOLE_MONOGRIDSCROLLER_GETGRIDREALCHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1583F540)
#define MOLEMOLE_MONOGRIDSCROLLER_GETITEMDICT_OFFSET UNITYSDK_OFFSET(0x1583EF70)
#define MOLEMOLE_MONOGRIDSCROLLER_GETITEMTRANSBYINDEX_OFFSET UNITYSDK_OFFSET(0x1583CE30)
#define MOLEMOLE_MONOGRIDSCROLLER_GETMAXITEMCOUNTWITHOUSCROLL_OFFSET UNITYSDK_OFFSET(0x1583CF10)
#define MOLEMOLE_MONOGRIDSCROLLER_GETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1583B420)
#define MOLEMOLE_MONOGRIDSCROLLER_GETPERFECTSHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1583CF60)
#define MOLEMOLE_MONOGRIDSCROLLER_GETSHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1583CFB0)
#define MOLEMOLE_MONOGRIDSCROLLER_GET_GRIDLAYOUT_OFFSET UNITYSDK_OFFSET(0x158400F0)
#define MOLEMOLE_MONOGRIDSCROLLER_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0x15838AB0)
#define MOLEMOLE_MONOGRIDSCROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x15838AE0)
#define MOLEMOLE_MONOGRIDSCROLLER_ISCHILDPARTIALLYINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1583EFB0)
#define MOLEMOLE_MONOGRIDSCROLLER_LEFTMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1583D4B0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_235563648AB4317F_OFFSET UNITYSDK_OFFSET(0x15840840)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x15839660)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_4A0A4692E3EEF246_OFFSET UNITYSDK_OFFSET(0x158408B0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_4EC65E6D54E9EC81_OFFSET UNITYSDK_OFFSET(0x15838DF0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x15839D10)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1583D910)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_5C466ABEE228060F_OFFSET UNITYSDK_OFFSET(0x1583DCB0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_67329C1ADD73615D_OFFSET UNITYSDK_OFFSET(0x158402A0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_6E25B78546488E1D_OFFSET UNITYSDK_OFFSET(0x1583AFD0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0x1583B5F0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x1583DB30)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x158398A0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1583C6C0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1583A740)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_AE231BEA38F773A1_OFFSET UNITYSDK_OFFSET(0x1583C720)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_C467FE94E295849F_OFFSET UNITYSDK_OFFSET(0x1583C1C0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_D2AEF5214D16E243_OFFSET UNITYSDK_OFFSET(0x158390F0)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_D8DF982F4E85DEF4_OFFSET UNITYSDK_OFFSET(0x15840390)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_DA6C1E0DEF87D3F0_OFFSET UNITYSDK_OFFSET(0x15840830)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_DB869E38C008252C_OFFSET UNITYSDK_OFFSET(0x1583CC30)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_EB11725F2157AE47_OFFSET UNITYSDK_OFFSET(0x1583AD00)
#define MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x15839AF0)
#define MOLEMOLE_MONOGRIDSCROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1583ECC0)
#define MOLEMOLE_MONOGRIDSCROLLER_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1583BDE0)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1583B2F0)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENT_OFFSET UNITYSDK_OFFSET(0x15839430)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHINDEXSET_OFFSET UNITYSDK_OFFSET(0x1583C9F0)
#define MOLEMOLE_MONOGRIDSCROLLER_REMOVECHILDREN_OFFSET UNITYSDK_OFFSET(0x15838F90)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOBEGIN_OFFSET UNITYSDK_OFFSET(0x1583B960)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x1583BA60)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTITEM_OFFSET UNITYSDK_OFFSET(0x1583B8F0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x1583C140)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGE_OFFSET UNITYSDK_OFFSET(0x1583B810)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREITEM_OFFSET UNITYSDK_OFFSET(0x1583B880)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x1583C4B0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGE_OFFSET UNITYSDK_OFFSET(0x1583B580)
#define MOLEMOLE_MONOGRIDSCROLLER_SETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1583B4A0)
#define MOLEMOLE_MONOGRIDSCROLLER_TURNSCROLLON_OFFSET UNITYSDK_OFFSET(0x1583D880)
#define MOLEMOLE_MONOGRIDSCROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1583C530)
#define MOLEMOLE_MONOGRIDSCROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15840100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller_TypeDefinitionIndex = 52210;

	class MonoGridScroller : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* itemPrefab; // 0x18
		::UnityEngine::RectTransform* grid; // 0x20
		::MoleMole::MonoGridScroller_Enum_3_DF4E55107CEFED9F moveType; // 0x28
		::MoleMole::MonoScrollBarAutoHide* scrollBarAutoHide; // 0x30
		::MoleMole::MonoScrollBar* scrollBar; // 0x38
		::System::String* scrollAudioPatternName; // 0x40
		::System::Boolean stretchCellSize; // 0x48
		::System::Boolean centerContent; // 0x49
		::System::Boolean autoPivot; // 0x4A
		::System::Boolean isGridEnable; // 0x4B
		::System::Boolean isOverrideItemSizeForSwap; // 0x4C
		::System::Single overrideItemSizeForSwap; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_12; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_13; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* Field_5_14; // 0x68
		::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA* Field_5_15; // 0x70
		::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA* Field_5_16; // 0x78
		::System::Boolean Field_5_17; // 0x80
		::System::Boolean Field_5_18; // 0x81
		::System::Int32 Field_5_19; // 0x84
		::System::Single scrollSpeed; // 0x88
		::System::Boolean Field_5_21; // 0x8C
		::System::Single Field_5_22; // 0x90
		::System::Single Field_5_23; // 0x94
		::System::Int32 Field_5_24; // 0x98
		::System::Boolean optLoadVisibleItems; // 0x9C
		::System::Boolean optEnableAsyncLoadItems; // 0x9D
		::System::Int32 _itemCount; // 0xA0
		::System::Int32 _transCount; // 0xA4
		::System::Int32 _col; // 0xA8
		::System::Int32 _row; // 0xAC
		::UnityEngine::Rect _scrollerRect; // 0xB0
		::UnityEngine::Vector2 _cellSize; // 0xC0
		::UnityEngine::Vector2 _spacing; // 0xC8
		::UnityEngine::UI::ScrollRect* _scroller; // 0xD0
		::UnityEngine::UI::GridLayoutGroup* _layout; // 0xD8
		::UnityEngine::Vector2 _padding; // 0xE0
		::System::Single _bottom; // 0xE8
		::System::Single _right; // 0xEC
		::System::Boolean Field_5_39; // 0xF0
		::System::Int32 SURPLUS_COUNT; // 0xF4
		::System::Boolean Field_5_41; // 0xF8
		::System::Boolean Field_5_42; // 0xF9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA* a1, ::System::Int32 a2, ::System::Nullable_1<::UnityEngine::Vector2> a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void RefreshCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENT_OFFSET))(this);
		}

		::System::Void RefreshCurrentByIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENTBYINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetNormalizedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETNORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void SetNormalizedPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SETNORMALIZEDPOSITION_OFFSET))(this, a1);
		}

		::System::Void ScrollToPrevPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGE_OFFSET))(this);
		}

		::System::Void ScrollToNextPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGE_OFFSET))(this);
		}

		::System::Void ScrollToPreItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREITEM_OFFSET))(this);
		}

		::System::Void ScrollToNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTITEM_OFFSET))(this);
		}

		::System::Void ScrollToBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOBEGIN_OFFSET))(this);
		}

		::System::Void ScrollToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOEND_OFFSET))(this);
		}

		::System::Void CenterItemByIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEX_OFFSET))(this, a1);
		}

		::System::Void CenterItemByIndexMulti(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEXMULTI_OFFSET))(this, a1);
		}

		::System::Void ScrollToNextPageWithAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGEWITHANIMATION_OFFSET))(this);
		}

		::System::Void ScrollToPrevPageWithAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGEWITHANIMATION_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void AddChildren(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ADDCHILDREN_OFFSET))(this, a1);
		}

		::System::Void RemoveChildren(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REMOVECHILDREN_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetItemTransByIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETITEMTRANSBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxItemCountWithouScroll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETMAXITEMCOUNTWITHOUSCROLL_OFFSET))(this);
		}

		::System::Int32 GetPerfectShowItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETPERFECTSHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Single GetShowItemCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETSHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Void LeftMoveItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_LEFTMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void TurnScrollOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_TURNSCROLLON_OFFSET))(this, a1);
		}

		::System::Void OnValueChanged(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void RefreshIndexSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHINDEXSET_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* GetItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETITEMDICT_OFFSET))(this);
		}

		::System::Boolean IsChildPartiallyInvisible(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ISCHILDPARTIALLYINVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetGridRealChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETGRIDREALCHILDCOUNT_OFFSET))(this);
		}

		::UnityEngine::UI::GridLayoutGroup* get_GridLayout()
		{
			return ((::UnityEngine::UI::GridLayoutGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GET_GRIDLAYOUT_OFFSET))(this);
		}

		::System::Void Method_5_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_5_AE231BEA38F773A1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_AE231BEA38F773A1_OFFSET))(this, a1);
		}

		::System::Void Method_5_4EC65E6D54E9EC81(::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_4EC65E6D54E9EC81_OFFSET))(this, a1);
		}

		::System::Void Method_5_D2AEF5214D16E243(::System::Nullable_1<::UnityEngine::Vector2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_D2AEF5214D16E243_OFFSET))(this, a1);
		}

		::System::Void Method_5_5C466ABEE228060F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_5C466ABEE228060F_OFFSET))(this, a1);
		}

		::System::Void Method_5_52C18C0DA8AC23E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_52C18C0DA8AC23E5_OFFSET))(this);
		}

		::System::Void Method_5_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA* Method_5_DA6C1E0DEF87D3F0()
		{
			return ((::MoleMole::MonoGridScroller_Class_3_EC572F192137EBDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_DA6C1E0DEF87D3F0_OFFSET))(this);
		}

		::System::Void Method_5_458DAEAB6170C584()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_458DAEAB6170C584_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Void Method_5_235563648AB4317F(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_235563648AB4317F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_EB11725F2157AE47(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_EB11725F2157AE47_OFFSET))(this, a1);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_5_D8DF982F4E85DEF4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_D8DF982F4E85DEF4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_7F4EBEC55EBE2D81()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_7F4EBEC55EBE2D81_OFFSET))(this);
		}

		::System::Void Method_5_DB869E38C008252C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_DB869E38C008252C_OFFSET))(this, a1);
		}

		::System::Void Method_5_67329C1ADD73615D(::UnityEngine::RectTransform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_67329C1ADD73615D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C467FE94E295849F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_C467FE94E295849F_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_5_4A0A4692E3EEF246(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_4A0A4692E3EEF246_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_82E992240300FB30_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_5_6E25B78546488E1D(::System::Int32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_6E25B78546488E1D_OFFSET))(this, a1);
		}

		::System::Void Method_5_7619D212F4D762A1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_METHOD_5_7619D212F4D762A1_OFFSET))(this, a1);
		}
	};
}
