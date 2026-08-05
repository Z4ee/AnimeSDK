#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_CBF33991B2AD7B1F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B22B20)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B22B90)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B22C30)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_SETROLEID_OFFSET UNITYSDK_OFFSET(0x12B22E00)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B22EB0)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B22F10)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B22FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShareRoleIconWidgetController_TypeDefinitionIndex = 84495;

	class UIZenkovShareRoleIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_CBF33991B2AD7B1F* get__viewModel()
		{
			return ((::Class_2_CBF33991B2AD7B1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRoleID(::System::Int32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_SETROLEID_OFFSET))(this, roleID);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
