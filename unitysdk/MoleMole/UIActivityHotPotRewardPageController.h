#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9F8349CD321DB894;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19758AE0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19758AF0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19758B60)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONLIVEHOUSEGETREWARD_OFFSET UNITYSDK_OFFSET(0x19758E90)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19758DF0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19758C00)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19759100)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19759110)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197591B0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197591C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotRewardPageController_TypeDefinitionIndex = 54618;

	class UIActivityHotPotRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_9F8349CD321DB894* get__viewModel()
		{
			return ((::Class_2_9F8349CD321DB894*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnLiveHouseGetReward(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER_ONLIVEHOUSEGETREWARD_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
