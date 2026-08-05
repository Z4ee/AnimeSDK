#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_122DCD3DEAA50079;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x172F2BE0)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x172F2920)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172F25C0)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172F2820)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172F28C0)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172F2630)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x172F2A60)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172F2D70)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172F2DD0)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172F2E70)
#define MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172F2F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralReportItemWidgetController_TypeDefinitionIndex = 88106;

	class UIGeneralReportItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_122DCD3DEAA50079* get__viewModel()
		{
			return ((::Class_2_122DCD3DEAA50079*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER_GET_INDEX_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREPORTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
