#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F79A436E91A3822C.h"
#include "unitysdk/MoleMole/UIRecentPlayerWidgetController_TabType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_47A774E9A13DE875;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_INITPARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15C0D990)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCLICKRECENTCONNECTTAB_OFFSET UNITYSDK_OFFSET(0x15C0D4D0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCLICKRECOMMENDFRIENDTAB_OFFSET UNITYSDK_OFFSET(0x15C0D3D0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C0D5D0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15C0D890)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVEPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x15C0DAA0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVERECENTPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x15C0E220)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVERECOMMENDFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x15C0E290)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C0D660)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C0D910)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C0CDB0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_TRIGGERRECOMMENDMORE_OFFSET UNITYSDK_OFFSET(0x15C0D9E0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0E300)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0x15C0E440)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x15C0E360)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x15C0E370)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x15C0E380)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET UNITYSDK_OFFSET(0x15C0E3E0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C0E4A0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15C0E530)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C0E5C0)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C0E660)
#define MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C0E6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecentPlayerWidgetController_TypeDefinitionIndex = 81071;

	class UIRecentPlayerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_47A774E9A13DE875* _view; // 0x2C0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C8
		::MoleMole::UIRecentPlayerWidgetController_TabType _currSelectTab; // 0x2D0
		::MoleMole::UIFriendSystemWidgetController* _parentWidgetController; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickRecommendFriendTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCLICKRECOMMENDFRIENDTAB_OFFSET))(this);
		}

		::System::Void OnClickRecentConnectTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCLICKRECENTCONNECTTAB_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitParentController(::MoleMole::UIFriendSystemWidgetController* uiFriendSystemWidgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendSystemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_INITPARENTCONTROLLER_OFFSET))(this, uiFriendSystemWidgetController);
		}

		::System::Void TriggerRecommendMore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_TRIGGERRECOMMENDMORE_OFFSET))(this);
		}

		::System::Void OnReceivePlayerList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list, ::Enum_3_F79A436E91A3822C tabType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*, ::Enum_3_F79A436E91A3822C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVEPLAYERLIST_OFFSET))(this, list, tabType);
		}

		::System::Void OnReceiveRecentPlayerList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVERECENTPLAYERLIST_OFFSET))(this, list);
		}

		::System::Void OnReceiveRecommendFriendList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER_ONRECEIVERECOMMENDFRIENDLIST_OFFSET))(this, list);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET))(this);
		}

		::System::Void _OnShow_b__7_0(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER__ONSHOW_B__7_0_OFFSET))(this, list);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECENTPLAYERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
