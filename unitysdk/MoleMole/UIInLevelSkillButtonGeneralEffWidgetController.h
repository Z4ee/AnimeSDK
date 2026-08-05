#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C7738335DA8727A0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19111180)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191111F0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19111290)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x191115F0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET UNITYSDK_OFFSET(0x19111810)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19111B80)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19111BE0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19111C80)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19111D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonGeneralEffWidgetController_TypeDefinitionIndex = 84204;

	class UIInLevelSkillButtonGeneralEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _effCoroutineHandle01; // 0x2C0
		::UnityEngine::GameObject* _effPrefab; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C7738335DA8727A0* get__viewModel()
		{
			return ((::Class_2_C7738335DA8727A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PlayFeedBack(::System::Single animRatio, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET))(this, animRatio, callback);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
