#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_7EF3ABD6A4B8C243;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMain_TopWidgetController_Context; }
namespace MoleMole { class UIFlowerMain_TopWidgetController_ViewModel; }

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x16A85E90)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x16A86290)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x16A86010)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x16A86320)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16A863F0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A86360)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A86170)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A864B0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A85DB0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__8_0_OFFSET UNITYSDK_OFFSET(0x16A86590)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A86530)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16A866B0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A86740)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A867D0)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A86870)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A86900)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_TypeDefinitionIndex = 60841;

	class UIFlowerMain_TopWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7EF3ABD6A4B8C243* _view; // 0x2C0
		::MoleMole::UIFlowerMain_TopWidgetController_Context* _context; // 0x2C8
		::MoleMole::UIFlowerMain_TopWidgetController_ViewModel* _viewModel; // 0x2D0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2D8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__8_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
