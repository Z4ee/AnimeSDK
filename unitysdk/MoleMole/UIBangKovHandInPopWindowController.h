#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_1685EC66FBD28897;
class Class_1_61933880828D8052;
class Class_2_B2F1B54A6BC70F07;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_APPLYBANGKOVITEMINFOTOWISHLIST_OFFSET UNITYSDK_OFFSET(0x15E5AE40)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET UNITYSDK_OFFSET(0x15E5C340)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E5A560)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKADDWISHLISTBTN_OFFSET UNITYSDK_OFFSET(0x15E5BA70)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x15E5C240)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKMOVEBTN_OFFSET UNITYSDK_OFFSET(0x15E5C1E0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E5A570)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15E5B630)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E5B970)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E5A8A0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E5B310)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E5A700)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_OPENBANGKOVITEMINFOFROMWISHLISTICON_OFFSET UNITYSDK_OFFSET(0x15E5B400)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_REFRESHWISHLISTBTNSTATE_OFFSET UNITYSDK_OFFSET(0x15E5B000)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E5C2F0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_SETSUBMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E5C2A0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E5B5D0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C5D0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_0_OFFSET UNITYSDK_OFFSET(0x15E5C680)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_2_OFFSET UNITYSDK_OFFSET(0x15E5C690)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__OPENBANGKOVITEMINFOFROMWISHLISTICON_B__10_0_OFFSET UNITYSDK_OFFSET(0x15E5C660)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E5C6A0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15E5C730)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E5C7E0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E5C810)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E5C820)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E5C830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangKovHandInPopWindowController_TypeDefinitionIndex = 58995;

	class UIBangKovHandInPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_B2F1B54A6BC70F07* _view; // 0x318
		::Class_1_61933880828D8052* _bangkovItemInfo; // 0x320
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _ItemDatas; // 0x328
		::System::Boolean _isAllItemEnough; // 0x330
		::System::Action* _submitCallback; // 0x338
		::System::Action* _cancelCallback; // 0x340
		::System::Int32 currentQuestID; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyBangkovItemInfoToWishList(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_APPLYBANGKOVITEMINFOTOWISHLIST_OFFSET))(this, itemList);
		}

		::System::Void OpenBangkovItemInfoFromWishlistIcon(::MoleMole::UIItemIconBtnWidgetController* iconController, ::System::Int32 logicItemId)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_OPENBANGKOVITEMINFOFROMWISHLISTICON_OFFSET))(this, iconController, logicItemId);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnClickAddWishListBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKADDWISHLISTBTN_OFFSET))(this);
		}

		::System::Void OnClickMoveBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKMOVEBTN_OFFSET))(this);
		}

		::System::Void OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void SetSubmitCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_SETSUBMITCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetCancelCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET))(this, callback);
		}

		::System::Int32 FindManualIdByCurrentQuestId(::System::Int32 currentQuestId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET))(this, currentQuestId);
		}

		::System::Void RefreshWishListBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_REFRESHWISHLISTBTNSTATE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* _OpenBangkovItemInfoFromWishlistIcon_b__10_0()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__OPENBANGKOVITEMINFOFROMWISHLISTICON_B__10_0_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_0_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER__ONCLICKADDWISHLISTBTN_B__14_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
