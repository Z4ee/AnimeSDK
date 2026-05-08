#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_FA793AB1D49D0132;
class Class_2_0ECAB02340C0C43A;
class Class_2_A944C35C433158AC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswer3D3DModelController; }
namespace MoleMole { class UIQuestionsAnswerConfigMono; }
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsListWidgetController; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_BACKTOSELECT_OFFSET UNITYSDK_OFFSET(0x151168F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x151146F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15114640)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15114590)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x151144D0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_THREEDWIDGET_OFFSET UNITYSDK_OFFSET(0x151144F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x151144C0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONBACKCALLBACK_OFFSET UNITYSDK_OFFSET(0x151149E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15114500)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15114EC0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15115720)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151152D0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15114780)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1375CA20)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETBACKBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x1375CE70)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETENVIRONMENTENABLE_OFFSET UNITYSDK_OFFSET(0x151156E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15114420)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_STARTGAMETASK_OFFSET UNITYSDK_OFFSET(0x15116860)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x15116500)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15116720)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1375CEE0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_0_OFFSET UNITYSDK_OFFSET(0x1375CEF0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_1_OFFSET UNITYSDK_OFFSET(0x1375CF50)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_2_OFFSET UNITYSDK_OFFSET(0x1375CFD0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_3_OFFSET UNITYSDK_OFFSET(0x1375D000)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_4_OFFSET UNITYSDK_OFFSET(0x1375CFC0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1375D030)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1375D0C0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1375D150)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1375D1F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1375D200)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1375D210)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController_TypeDefinitionIndex = 81709;

	class UIQuestionsAnswerPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_0ECAB02340C0C43A* _view; // 0x320
		::MoleMole::UIQuestionsAnswerWidgetController* _gameWidget; // 0x328
		::MoleMole::UIQuestionsListWidgetController* _listWidget; // 0x330
		::MoleMole::UIQuestionsAnswer3D3DModelController* _3dWidget; // 0x338
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* _environment; // 0x340
		::System::Int32 CurrentStageId; // 0x348
		::Class_2_A944C35C433158AC* _currentTask; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerConfigMono* get_Config()
		{
			return ((::MoleMole::UIQuestionsAnswerConfigMono*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* get_ThreeDWidget()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_GET_THREEDWIDGET_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIQuestionsListWidgetController* CreateUIQuestionsListWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* CreateUIQuestionsAnswerWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBackCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONBACKCALLBACK_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean SetEnvironmentEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETENVIRONMENTENABLE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartGame(::System::Int32 stageId, ::System::Boolean restart, ::System::Single fadeinTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_STARTGAME_OFFSET))(this, stageId, restart, fadeinTime);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartGameTask(::System::Int32 stageId, ::System::Boolean restart)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_STARTGAMETASK_OFFSET))(this, stageId, restart);
		}

		::System::Void BackToSelect(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_BACKTOSELECT_OFFSET))(this, isFinish);
		}

		::System::Void PlayTimeline(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, key);
		}

		::System::Void SetBackBtnActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER_SETBACKBTNACTIVE_OFFSET))(this, active);
		}

		::System::Void _OnBackCallback_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_0_OFFSET))(this);
		}

		::System::Void _OnBackCallback_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_1_OFFSET))(this);
		}

		::System::Void _OnBackCallback_b__19_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_4_OFFSET))(this);
		}

		::System::Void _OnBackCallback_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_2_OFFSET))(this);
		}

		::System::Void _OnBackCallback_b__19_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__ONBACKCALLBACK_B__19_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
