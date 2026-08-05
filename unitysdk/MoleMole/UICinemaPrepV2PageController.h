#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_24758E3363B91243;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x192B7D40)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192B7D50)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192B7E60)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192B8220)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192B8320)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192B7F00)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192B7DC0)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B8490)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192B84A0)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192B8540)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192B85E0)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192B85F0)
#define MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192B8600)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPrepV2PageController_TypeDefinitionIndex = 82595;

	class UICinemaPrepV2PageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_24758E3363B91243* get__viewModel()
		{
			return ((::Class_2_24758E3363B91243*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
