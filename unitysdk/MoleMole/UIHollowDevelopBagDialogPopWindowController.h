#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIHollowDevelopBagDialogPopWindowController_SortType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_03F4D9B3111E6159;
class Class_2_3015A1CEA116F463;
class Class_2_702D914FA95B6E36;
class Class_2_73836654F8931C75;
class Class_2_79F6D62CE30E3F8E_143;
class Class_2_F5737224A0253470;
class MonoUIAnimScroll;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace MoleMole { class UIHollowDevelopBagDialogPopWindowController_UIArcanFlagItem; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_AUTOMOVE_OFFSET UNITYSDK_OFFSET(0x16D62000)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D5CC00)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_CREATESORT_OFFSET UNITYSDK_OFFSET(0x16D5E080)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETALLCARDS_OFFSET UNITYSDK_OFFSET(0x16D5AA80)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETCARDCONTENTINDEX_OFFSET UNITYSDK_OFFSET(0x16D5FF20)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x16D5EEA0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0x16D5CA10)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x16D5A3B0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x16D592F0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16D57DE0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_HIDESELECT_OFFSET UNITYSDK_OFFSET(0x16D5F7C0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16D5F770)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x16D61D40)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D59300)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x16D5F3B0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONFILTERDROPCHANGE_OFFSET UNITYSDK_OFFSET(0x16D5EBD0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16D5DA20)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x16D5DBE0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16D57DF0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONPAGEINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x16D5F6E0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D5D530)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D5D8E0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D59390)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D5CEE0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x16D626B0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_PREPAREALLITEM_OFFSET UNITYSDK_OFFSET(0x16D59D30)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHBANGBOOVIEW_OFFSET UNITYSDK_OFFSET(0x16D5ABE0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x16D5F940)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHCARDBAGVIEW_OFFSET UNITYSDK_OFFSET(0x16D5DC90)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHPAGEINDEX_OFFSET UNITYSDK_OFFSET(0x16D5A790)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHSIZE_OFFSET UNITYSDK_OFFSET(0x16D5A880)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16D580D0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET UNITYSDK_OFFSET(0x16D62630)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_RESETMAXPAGECOUNT_OFFSET UNITYSDK_OFFSET(0x16D5A700)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x16D5FFA0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UPDATEARROWSTATE_OFFSET UNITYSDK_OFFSET(0x16D62440)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16D623F0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_0_OFFSET UNITYSDK_OFFSET(0x16D63240)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_1_OFFSET UNITYSDK_OFFSET(0x16D63250)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_2_OFFSET UNITYSDK_OFFSET(0x16D63260)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__CREATESORT_B__21_0_OFFSET UNITYSDK_OFFSET(0x16D631C0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D62C30)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__REFRESHBANGBOOVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x16D63100)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__REFRESHBANGBOOVIEW_B__13_1_OFFSET UNITYSDK_OFFSET(0x16D63160)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D63270)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16D63300)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16D63330)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D633C0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D63480)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D63490)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D634A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController_TypeDefinitionIndex = 82817;

	class UIHollowDevelopBagDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 CARD_PAGE_COUNT = 0xF; // 0x0
		// static const ::System::Int32 BUDDY_COUNT = 0x3; // 0x0
		// static const ::System::Int32 MAX_ARCANFLAG_COUNT = 0x2; // 0x0
		// static const ::System::Int32 MAX_BUFF_COUNT = 0x5; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* bangbooSet; // 0x318
		::MoleMole::UIHollowDevelopBagDialogPopWindowController_SortType currentSortType; // 0x320
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* sortParams; // 0x328
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropdownSelect; // 0x330
		::Class_2_79F6D62CE30E3F8E_143* _view; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowCardItemBtnWidgetController*>* allItems; // 0x340
		::UnityEngine::GameObject* lastSelectCard; // 0x348
		::Class_2_F5737224A0253470* _holloModel; // 0x350
		::Class_2_03F4D9B3111E6159* _itemModel; // 0x358
		::Class_2_702D914FA95B6E36* _roleModel; // 0x360
		::Class_2_73836654F8931C75* _propertyModel; // 0x368
		::Class_2_3015A1CEA116F463* _questModel; // 0x370
		::MonoUIAnimScroll* _scrollRectEx; // 0x378
		::System::Single _dragThreshold; // 0x380
		::System::Int32 _curPageIndex; // 0x384
		::System::Int32 _maxPageIndex; // 0x388
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _curShowItems; // 0x390
		::System::Int32 _curShowCount; // 0x398
		::System::Int32 _xcount; // 0x39C
		::System::Int32 _ycount; // 0x3A0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* _uiItemList; // 0x3A8
		::UnityEngine::RectTransform* _viewRect; // 0x3B0
		::UnityEngine::Bounds _viewBounds; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>* _itemStatus; // 0x3D0
		::UnityEngine::Vector2 _contentCellSize; // 0x3D8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowDevelopBagDialogPopWindowController_UIArcanFlagItem*>* _arcanFlagItems; // 0x3E0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowDevelopBagDialogPopWindowController_UIArcanFlagItem*>* _bagArcanaFlagItems; // 0x3E8
		::UnityEngine::Animation* _anim; // 0x3F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _minPosition; // 0x3F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _maxPosition; // 0x400
		::System::String* EmptyBG; // 0x408
		::System::String* curBG; // 0x410
		::UnityEngine::GameObject* bgPrefab; // 0x418
		::DG::Tweening::Tweener* _autoTweener; // 0x420
		::System::Boolean inited; // 0x428
		::System::Collections::Generic::List_1<::System::Int32>* curItemIndexList; // 0x430

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHSIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetAllCards()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETALLCARDS_OFFSET))(this);
		}

		::System::Void PrepareAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_PREPAREALLITEM_OFFSET))(this);
		}

		::System::Void RefreshBangbooView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHBANGBOOVIEW_OFFSET))(this);
		}

		::MoleMole::UIHollowCardItemBtnWidgetController* GetItemCtrl(::System::Int32 contentIndex, ::System::Int32 index)
		{
			return ((::MoleMole::UIHollowCardItemBtnWidgetController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET))(this, contentIndex, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void CreateSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_CREATESORT_OFFSET))(this);
		}

		::System::Void OnFilterDropChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONFILTERDROPCHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void RefreshCardBagView(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHCARDBAGVIEW_OFFSET))(this, item);
		}

		::System::Void ResetMaxPageCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_RESETMAXPAGECOUNT_OFFSET))(this);
		}

		::UnityEngine::Bounds GetChildBounds(::UnityEngine::RectTransform* childrecttrans)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETCHILDBOUNDS_OFFSET))(this, childrecttrans);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONENDDRAG_OFFSET))(this, arg0);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONBEGINDRAG_OFFSET))(this, arg0);
		}

		::System::Void OnPageIndexChanged(::System::Boolean isadd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONPAGEINDEXCHANGED_OFFSET))(this, isadd);
		}

		::System::Void HideSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_HIDESELECT_OFFSET))(this);
		}

		::System::Void RefreshPageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHPAGEINDEX_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_REFRESHBOUNDS_OFFSET))(this);
		}

		::System::Void ShowTips(::System::Int32 itemid, ::UnityEngine::GameObject* selectedGo, ::System::String* addtitle, ::System::Boolean showStory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_SHOWTIPS_OFFSET))(this, itemid, selectedGo, addtitle, showStory);
		}

		::System::Void OnCardClick(::UnityEngine::GameObject* go, ::System::Int32 itemid, ::System::String* addtitle, ::System::Boolean showStory, ::System::Int32 selectChildIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONCARDCLICK_OFFSET))(this, go, itemid, addtitle, showStory, selectChildIndex);
		}

		::System::Void AutoMove(::UnityEngine::GameObject* clickGo, ::System::Int32 selectChildIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_AUTOMOVE_OFFSET))(this, clickGo, selectChildIndex);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetCardContentIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETCARDCONTENTINDEX_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ResetContent()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET))(this);
		}

		::System::Void UpdateArrowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UPDATEARROWSTATE_OFFSET))(this);
		}

		::System::Void OnValueChanged(::UnityEngine::Vector2 arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_ONVALUECHANGED_OFFSET))(this, arg0);
		}

		::System::Void GetUIElementInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET))(this);
		}

		::System::Void _RefreshBangbooView_b__13_0(::UnityEngine::GameObject* go, ::System::Int32 id2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__REFRESHBANGBOOVIEW_B__13_0_OFFSET))(this, go, id2);
		}

		::System::Void _RefreshBangbooView_b__13_1(::UnityEngine::GameObject* go, ::System::Int32 id2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__REFRESHBANGBOOVIEW_B__13_1_OFFSET))(this, go, id2);
		}

		::System::Void _CreateSort_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__CREATESORT_B__21_0_OFFSET))(this);
		}

		::System::Void _AutoMove_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_0_OFFSET))(this);
		}

		::System::Void _AutoMove_b__35_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_1_OFFSET))(this);
		}

		::System::Void _AutoMove_b__35_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER__AUTOMOVE_B__35_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
