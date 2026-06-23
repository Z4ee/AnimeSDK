#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_3912DACC4CA46F07.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_F71813D54A1980F5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A682D0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKCONSOLEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0x18A69550)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKINGAMEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0x18A695A0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A68B60)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0x18A68C60)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONREMOVEFROMBLACKLIST_OFFSET UNITYSDK_OFFSET(0x18A691A0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A68BF0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A682E0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A68AF0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_PLATFORM_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0x18A692C0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0x18A68ED0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69650)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x18A696C0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x18A69720)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x18A69780)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x18A69790)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A697E0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A69870)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A69880)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A69890)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackListPopWindowController_TypeDefinitionIndex = 51841;

	class UIBlackListPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_2F3C7D4EFC74D485* _model; // 0x318
		::Class_2_F71813D54A1980F5* _view; // 0x320
		::System::Int32 _currSelectIdx; // 0x328
		::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* _blackList; // 0x330
		::System::Collections::Generic::List_1<::Struct_2_3912DACC4CA46F07>* _dataList; // 0x338
		::System::Boolean _allowShowPlatform; // 0x340
		::System::Boolean _isSelectingInGameTab; // 0x341

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnReceiveBlackList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONRECEIVEBLACKLIST_OFFSET))(this, list);
		}

		::System::Void OnRemoveFromBlackList(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONREMOVEFROMBLACKLIST_OFFSET))(this, index);
		}

		::System::Void ShowEmptyContent(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_SHOWEMPTYCONTENT_OFFSET))(this, isEmpty);
		}

		::System::Void Platform_OnReceiveBlackList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_PLATFORM_ONRECEIVEBLACKLIST_OFFSET))(this, list);
		}

		::System::Void OnClickConsoleBlackListTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKCONSOLEBLACKLISTTAB_OFFSET))(this);
		}

		::System::Void OnClickInGameBlackListTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKINGAMEBLACKLISTTAB_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
