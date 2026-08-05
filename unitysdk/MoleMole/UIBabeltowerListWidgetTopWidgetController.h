#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_60638234271CCDB8_34;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1801CEB0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1801CF40)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1801CDE0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1801CE40)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1801CFC0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1801CFD0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1801D060)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1801D0F0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1801D180)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerListWidgetTopWidgetController_TypeDefinitionIndex = 45078;

	class UIBabeltowerListWidgetTopWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_34* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETTOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
