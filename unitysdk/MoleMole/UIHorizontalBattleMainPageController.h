#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_107E8C66EE9C72A0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186DD650)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x186DD660)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x186DD770)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DD6D0)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186DD830)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186DD8E0)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x186DD8F0)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x186DD960)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DDA00)
#define MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186DDA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHorizontalBattleMainPageController_TypeDefinitionIndex = 62946;

	class UIHorizontalBattleMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_107E8C66EE9C72A0* get__viewModel()
		{
			return ((::Class_2_107E8C66EE9C72A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void _OnUIInit_b__4_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBATTLEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
