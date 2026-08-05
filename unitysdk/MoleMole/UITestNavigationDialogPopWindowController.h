#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_E75CF23561770A7A_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITestNavigationDialogPopWindowController_UiItem; }

#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x15F909A0)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15F8FF20)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x15F90590)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F90490)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F90520)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F8FF30)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F90420)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F90A20)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F90A70)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F90B00)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F90B10)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F90B20)

namespace MoleMole
{
	inline static constexpr unsigned int UITestNavigationDialogPopWindowController_TypeDefinitionIndex = 86590;

	class UITestNavigationDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E75CF23561770A7A_1* _view; // 0x318
		::Il2CppArray<::MoleMole::UITestNavigationDialogPopWindowController_UiItem*>* _items; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Init(::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_INIT_OFFSET))(this, dataList);
		}

		::System::Void Callback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_CALLBACK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
