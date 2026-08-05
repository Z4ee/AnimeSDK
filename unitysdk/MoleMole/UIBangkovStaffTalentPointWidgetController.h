#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovTalentPointWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_62130B96C4C20F86;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E47380)
#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E473F0)
#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E47490)
#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E475B0)
#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E47610)
#define MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E47620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovStaffTalentPointWidgetController_TypeDefinitionIndex = 84077;

	class UIBangkovStaffTalentPointWidgetController : public ::MoleMole::UIBangkovTalentPointWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_62130B96C4C20F86* get__viewModel()
		{
			return ((::Class_3_62130B96C4C20F86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSTAFFTALENTPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
