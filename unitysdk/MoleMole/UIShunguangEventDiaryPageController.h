#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_89BDD5E6CEC0237F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16AA7E30)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AA7E40)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AA7EB0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16AA80C0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16AA8020)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AA7F70)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA81C0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AA81D0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16AA8270)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16AA82A0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AA82B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShunguangEventDiaryPageController_TypeDefinitionIndex = 44449;

	class UIShunguangEventDiaryPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_89BDD5E6CEC0237F* get__viewModel()
		{
			return ((::Class_2_89BDD5E6CEC0237F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
