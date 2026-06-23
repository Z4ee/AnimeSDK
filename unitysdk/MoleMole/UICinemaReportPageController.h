#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_97F4CB13AAF72DAF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17F66210)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17F66220)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17F66290)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSELFINFOCHAGNED_OFFSET UNITYSDK_OFFSET(0x17F66750)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17F665A0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F66650)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F66330)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_SETVIEWRADARCHARTLIST_OFFSET UNITYSDK_OFFSET(0x17F668B0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17F66800)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F66A40)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17F66A50)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17F66AF0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F66B00)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F66BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaReportPageController_TypeDefinitionIndex = 73756;

	class UICinemaReportPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_97F4CB13AAF72DAF* get__viewModel()
		{
			return ((::Class_2_97F4CB13AAF72DAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnSelfInfoChagned(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSELFINFOCHAGNED_OFFSET))(this, args);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetViewRadarChartList(::System::Collections::Generic::List_1<::System::Single>* setValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_SETVIEWRADARCHARTLIST_OFFSET))(this, setValueList);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
