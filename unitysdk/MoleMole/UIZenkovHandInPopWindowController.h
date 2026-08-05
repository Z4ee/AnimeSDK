#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_175;
class Class_2_79AE422BA06F6D26_163;
class Class_2_97891B4D65D54614;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_APPLYZENKOVITEMINFOTOWISHLIST_OFFSET UNITYSDK_OFFSET(0x11E47100)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x11E475D0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET UNITYSDK_OFFSET(0x11E48800)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11E46740)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKADDWISHLISTBTN_OFFSET UNITYSDK_OFFSET(0x11E48020)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x11E48700)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKMOVEBTN_OFFSET UNITYSDK_OFFSET(0x11E486A0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E46750)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E47C10)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E47C90)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E46AB0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E47990)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E468E0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_OPENZENKOVITEMINFOFROMWISHLISTICON_OFFSET UNITYSDK_OFFSET(0x11E47A00)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_REFRESHWISHLISTBTNSTATE_OFFSET UNITYSDK_OFFSET(0x11E472C0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x11E487B0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_SETSUBMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x11E48760)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E47BD0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E48A90)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_0_OFFSET UNITYSDK_OFFSET(0x11E48B20)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_2_OFFSET UNITYSDK_OFFSET(0x11E48B30)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x11E48B40)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E48B50)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E48BE0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E48C90)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E48CC0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E48CD0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E48CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovHandInPopWindowController_TypeDefinitionIndex = 58003;

	class UIZenkovHandInPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_163* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_2_97891B4D65D54614*>* _ItemDatas; // 0x320
		::System::Boolean _isAllItemEnough; // 0x328
		::System::Action* _submitCallback; // 0x330
		::System::Action* _cancelCallback; // 0x338
		::System::Int32 currentQuestID; // 0x340
		::MoleMole::MonoGamepadNavigatableList* _rewardInfoNavigatableList; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyZenkovItemInfoToWishList(::System::Collections::Generic::List_1<::Class_2_97891B4D65D54614*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_97891B4D65D54614*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_APPLYZENKOVITEMINFOTOWISHLIST_OFFSET))(this, itemList);
		}

		::System::Void OpenZenkovItemInfoFromWishlistIcon(::Class_0_16E4307DCC419505_175* iconController, ::System::Int32 logicItemId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_OPENZENKOVITEMINFOFROMWISHLISTICON_OFFSET))(this, iconController, logicItemId);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnClickAddWishListBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKADDWISHLISTBTN_OFFSET))(this);
		}

		::System::Void OnClickMoveBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKMOVEBTN_OFFSET))(this);
		}

		::System::Void OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void SetSubmitCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_SETSUBMITCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetCancelCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET))(this, callback);
		}

		::System::Int32 FindManualIdByCurrentQuestId(::System::Int32 currentQuestId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET))(this, currentQuestId);
		}

		::System::Void RefreshWishListBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_REFRESHWISHLISTBTNSTATE_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_0_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_2_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
