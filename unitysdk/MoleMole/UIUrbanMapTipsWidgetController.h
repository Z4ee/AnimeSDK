#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B34091191FCE3A1B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16788180)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_MANUALSETBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x16788E50)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x167882C0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x167886E0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16788B40)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16788390)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167887A0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167881F0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16788A30)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONURBANMAPENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x16788800)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_RELEASEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16788B00)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x167888A0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_TRIGGERMAPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16788990)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16788F40)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16788FA0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16789040)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167890D0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16789100)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167891A0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16789230)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTipsWidgetController_TypeDefinitionIndex = 66162;

	class UIUrbanMapTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_575273D27F02957E _binderInfo; // 0x2C0
		::MoleMole::UIControlReference* _controlReference; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B34091191FCE3A1B* get__viewModel()
		{
			return ((::Class_2_B34091191FCE3A1B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUrbanMapEnableUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONURBANMAPENABLEUPDATE_OFFSET))(this, obj);
		}

		::System::Void SetConsoleActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active);
		}

		::System::Boolean TriggerMapBtnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_TRIGGERMAPBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void ReleaseViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_RELEASEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ManualSetBtnActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_MANUALSETBTNACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
