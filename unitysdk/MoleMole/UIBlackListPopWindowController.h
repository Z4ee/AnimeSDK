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

#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1646F390)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKCONSOLEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0x16470610)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKINGAMEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0x16470660)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1646FC20)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0x1646FD20)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONREMOVEFROMBLACKLIST_OFFSET UNITYSDK_OFFSET(0x16470260)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1646FCB0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1646F3A0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1646FBB0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_PLATFORM_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0x16470380)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0x1646FF90)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16470710)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x16470780)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x164707E0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x16470840)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x16470850)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164708A0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16470930)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16470940)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16470950)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackListPopWindowController_TypeDefinitionIndex = 80934;

	class UIBlackListPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_2F3C7D4EFC74D485* _model; // 0x310
		::Class_2_F71813D54A1980F5* _view; // 0x318
		::System::Int32 _currSelectIdx; // 0x320
		::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* _blackList; // 0x328
		::System::Collections::Generic::List_1<::Struct_2_3912DACC4CA46F07>* _dataList; // 0x330
		::System::Boolean _allowShowPlatform; // 0x338
		::System::Boolean _isSelectingInGameTab; // 0x339

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
