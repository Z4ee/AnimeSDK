#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8B791DEAF947B139;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x197CC1A0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x197CC1B0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x197CC220)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x197CC4F0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x197CC5A0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197CC2C0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197CC6A0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x197CC6B0)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x197CC750)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x197CC760)
#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197CC820)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTotalRewardPageController_TypeDefinitionIndex = 45619;

	class UIAbyssTotalRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8B791DEAF947B139* get__viewModel()
		{
			return ((::Class_2_8B791DEAF947B139*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
