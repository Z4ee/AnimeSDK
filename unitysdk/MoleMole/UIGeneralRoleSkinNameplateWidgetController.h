#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1F5FCA01076AF6C5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A316660)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3166D0)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A3169C0)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A316770)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A3167D0)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A316BC0)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A316C20)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A316CC0)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A316D60)
#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A316DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinNameplateWidgetController_TypeDefinitionIndex = 65226;

	class UIGeneralRoleSkinNameplateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1F5FCA01076AF6C5* get__viewModel()
		{
			return ((::Class_2_1F5FCA01076AF6C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
