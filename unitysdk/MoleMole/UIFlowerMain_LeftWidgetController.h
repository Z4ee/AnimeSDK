#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_3F217C90780E6324;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_Context; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_ViewModel; }

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x1518FB10)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x15190020)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x1518FB50)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x1518FCB0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15190260)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151901D0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1518FBC0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15190320)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1518FA10)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__BUILDDATABINDING_B__7_0_OFFSET UNITYSDK_OFFSET(0x15190400)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151903A0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x151907A0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15190830)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x151908C0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15190960)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151909F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_TypeDefinitionIndex = 40620;

	class UIFlowerMain_LeftWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3F217C90780E6324* _view; // 0x2B8
		::MoleMole::UIFlowerMain_LeftWidgetController_Context* _context; // 0x2C0
		::MoleMole::UIFlowerMain_LeftWidgetController_ViewModel* _viewModel; // 0x2C8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2D0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2D8
		::MoleMole::UIFlowerMainTargetRoleWidgetController* _mainTargetRoleWidget; // 0x2E0
		::MoleMole::UIFlowerMainTargetImgWidgetController* _mainTargetImgWidget; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__BUILDDATABINDING_B__7_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
