#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_973CD413AE4EDD8F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16D52E50)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16D52EC0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16D53190)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16D52F60)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D53230)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_REALSETACTIVESAFELY_OFFSET UNITYSDK_OFFSET(0x16D52D90)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D532D0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16D53330)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16D533D0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16D53460)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D53500)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_REALSETACTIVESAFELY_OFFSET UNITYSDK_OFFSET(0x16D53510)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSearchWidgetController_TypeDefinitionIndex = 63993;

	class UIBangkovSearchWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RealSetActiveSafely(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_REALSETACTIVESAFELY_OFFSET))(this, active);
		}

		::Class_2_973CD413AE4EDD8F* get__viewModel()
		{
			return ((::Class_2_973CD413AE4EDD8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_RealSetActiveSafely(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_REALSETACTIVESAFELY_OFFSET))(this, P0);
		}
	};
}
