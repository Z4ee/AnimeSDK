#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9C9F478D2665180E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D602C0)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D602D0)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D603E0)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D60340)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D604A0)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D60590)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x17D605A0)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D60660)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D60700)
#define MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D60710)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardPageController_TypeDefinitionIndex = 53067;

	class UISummerEventRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_9C9F478D2665180E* get__viewModel()
		{
			return ((::Class_2_9C9F478D2665180E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void _OnUIInit_b__4_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
