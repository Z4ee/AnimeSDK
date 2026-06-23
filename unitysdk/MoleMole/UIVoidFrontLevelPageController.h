#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EFF60217237E979E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10415CB0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10415CC0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GMREFRESH_OFFSET UNITYSDK_OFFSET(0x104161F0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10415D30)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10416080)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x10415F90)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10415DF0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10415EA0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_PLAYSWITCHFADEIN_OFFSET UNITYSDK_OFFSET(0x10416140)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_PLAYSWITCHFADEOUT_OFFSET UNITYSDK_OFFSET(0x10414AA0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x104162B0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x104162C0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10416360)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x10416370)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10416430)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10416440)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelPageController_TypeDefinitionIndex = 47818;

	class UIVoidFrontLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_EFF60217237E979E* get__viewModel()
		{
			return ((::Class_2_EFF60217237E979E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Single PlaySwitchFadeOut(::System::Action* action)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_PLAYSWITCHFADEOUT_OFFSET))(this, action);
		}

		::System::Single PlaySwitchFadeIn(::System::Action* action)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_PLAYSWITCHFADEIN_OFFSET))(this, action);
		}

		::System::Void GmRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER_GMREFRESH_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
