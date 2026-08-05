#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_17FCF354542601B4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiniScapeMapPage_MapIconDetailWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_TopWidgetController; }
namespace MoleMole { class UIMiniscapeMapPageController_Model; }
namespace MoleMole { class UIMiniscapeMapPageController_ViewModel; }

#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x184F1DE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x184F1C00)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x184F2940)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDFAKEDATA_OFFSET UNITYSDK_OFFSET(0x184F23F0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x184F1E20)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x184F2430)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x184F1A80)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x184F2A20)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184F1A90)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184F29B0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184F1B20)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184F2030)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_0_OFFSET UNITYSDK_OFFSET(0x184F2B40)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_1_OFFSET UNITYSDK_OFFSET(0x184F2B60)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184F2AE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x184F2B80)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184F2C10)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184F2CA0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184F2CB0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184F2CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMapPageController_TypeDefinitionIndex = 65088;

	class UIMiniscapeMapPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_17FCF354542601B4* _view; // 0x318
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x320
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x328
		::MoleMole::UIMiniscapeMapPageController_Model* _model; // 0x330
		::MoleMole::UIMiniscapeMapPageController_ViewModel* _viewModel; // 0x338
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _mapWidget; // 0x340
		::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController* _mapIconDetailWidget; // 0x348
		::MoleMole::UIMiniScapeMapPage_TopWidgetController* _topWidget; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void BindData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDDATA_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void BuildFakeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDFAKEDATA_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_1_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
