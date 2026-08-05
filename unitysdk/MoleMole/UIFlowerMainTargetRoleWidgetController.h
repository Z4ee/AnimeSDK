#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_BFB2914C322C9564;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController_Context; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController_ViewModel; }
namespace MoleMole { class UIFlowerMainTargetRole_TagNumWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRole_TargetWidgetController; }

#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x183F00A0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x183F04C0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x183F01C0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x183F00E0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x183F0670)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183F05E0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183F0230)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183F0730)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183EFFA0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_SHOWSUBWIDGET_OFFSET UNITYSDK_OFFSET(0x183F0320)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183F07B0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x183F0810)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183F08A0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183F0930)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183F09D0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183F0A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetRoleWidgetController_TypeDefinitionIndex = 46138;

	class UIFlowerMainTargetRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BFB2914C322C9564* _view; // 0x2C0
		::MoleMole::UIFlowerMainTargetRoleWidgetController_Context* _context; // 0x2C8
		::MoleMole::UIFlowerMainTargetRoleWidgetController_ViewModel* _viewModel; // 0x2D0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2D8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2E0
		::MoleMole::UIFlowerMainTargetRole_TargetWidgetController* _targetWidget; // 0x2E8
		::MoleMole::UIFlowerMainTargetRole_TagNumWidgetController* _tagNumWidget; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void ShowSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_SHOWSUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
