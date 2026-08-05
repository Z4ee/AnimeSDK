#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_67F6C7993CFCECE9_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ADD_ONMAINBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x185282F0)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET_SELECTABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x185283F0)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET_TRANSITIONANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x18528210)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18528280)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18528460)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18528500)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18528890)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18528770)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_REMOVE_ONMAINBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x18528370)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18528940)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER__ONSHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0x185289A0)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18528A60)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x185289C0)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18528B00)
#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18528B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPointWidgetController_TypeDefinitionIndex = 69476;

	class UIBangkovTalentPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action* OnMainButtonClicked; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Single get_TransitionAnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET_TRANSITIONANIMATIONLENGTH_OFFSET))(this);
		}

		::System::Void add_OnMainButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ADD_ONMAINBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Void remove_OnMainButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_REMOVE_ONMAINBUTTONCLICKED_OFFSET))(this, value);
		}

		::Class_2_67F6C7993CFCECE9_1* get__viewModel()
		{
			return ((::Class_2_67F6C7993CFCECE9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_SelectableObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_GET_SELECTABLEOBJECT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void _OnShow_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER__ONSHOW_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
