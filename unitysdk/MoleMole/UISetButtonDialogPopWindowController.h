#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_1068;
class Class_2_208CC9941471731A_87;
class Class_2_68D38DAD1613A778_9;
class Class_2_BCB29D9ECCEF0E00;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuickSetButtonWidgetChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_CREATESETBTNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1675FE50)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_DELETESETBTN_OFFSET UNITYSDK_OFFSET(0x167602E0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1675F490)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1675FE00)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16760710)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONQUICKFUNCCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1675FFE0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1675F5C0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167607A0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1675F4A0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1675F610)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUPDATESETBTN_OFFSET UNITYSDK_OFFSET(0x167603D0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_TRYGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x1675FA50)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16760810)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167608F0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16760980)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16760990)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167609A0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167609B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISetButtonDialogPopWindowController_TypeDefinitionIndex = 85998;

	class UISetButtonDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_68D38DAD1613A778_9* _view; // 0x318
		::System::Int32 quickIndex; // 0x320
		::Class_2_208CC9941471731A_1068* quickAcessCfg; // 0x328
		::Class_2_BCB29D9ECCEF0E00* lockModel; // 0x330
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_87*>* showUnlockList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIQuickSetButtonWidgetChildWindowController*>* objcetItmeList; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCloseBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void TryGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_TRYGAMEPADSELECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateSetBtnGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_CREATESETBTNGAMEOBJECT_OFFSET))(this);
		}

		::System::Void OnQuickFuncClickHandle(::System::Int32 arg1, ::Class_2_208CC9941471731A_87* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_87*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONQUICKFUNCCLICKHANDLE_OFFSET))(this, arg1, arg2);
		}

		::System::Void DeleteSetBtn(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_DELETESETBTN_OFFSET))(this, go);
		}

		::System::Void OnUpdateSetBtn(::UnityEngine::GameObject* go, ::System::Int32 dataIndex, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUPDATESETBTN_OFFSET))(this, go, dataIndex, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
