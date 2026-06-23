#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_F6FF1F4D17D6D345;
class Class_2_79F6D62CE30E3F8E_69;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x187421E0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18742020)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x187420B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18742150)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18741EA0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18741F00)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETACTIVITYQUESTSTATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x18743020)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18742230)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETPOPTIPINFO_OFFSET UNITYSDK_OFFSET(0x187430B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x18742570)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWNANDPROGRESS_OFFSET UNITYSDK_OFFSET(0x18742CE0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18742A50)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESSICON_OFFSET UNITYSDK_OFFSET(0x18742490)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x187422E0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLEONWHOLEROW_OFFSET UNITYSDK_OFFSET(0x187428B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLE_OFFSET UNITYSDK_OFFSET(0x18742710)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18743230)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18743290)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18743320)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187433C0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18743450)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187434E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompRowTaskListWidgetController_TypeDefinitionIndex = 50772;

	class UIActivityCompRowTaskListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_69* _view; // 0x2C0
		::Class_1_F6FF1F4D17D6D345* questStateHandler; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_79F6D62CE30E3F8E_69* GetView()
		{
			return ((::Class_2_79F6D62CE30E3F8E_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void ShowProgress(::System::String* title, ::System::Int32 leftNum, ::System::Int32 rightNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESS_OFFSET))(this, title, leftNum, rightNum);
		}

		::System::Void ShowProgressIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESSICON_OFFSET))(this, iconPath);
		}

		::System::Void ShowContext(::System::String* title, ::System::String* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCONTEXT_OFFSET))(this, title, context);
		}

		::System::Void ShowTitle(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLE_OFFSET))(this, title);
		}

		::System::Void ShowTitleOnWholeRow(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLEONWHOLEROW_OFFSET))(this, title);
		}

		::System::Void ShowCountDown(::System::String* title, ::System::String* timerTitle, ::System::Int64 timeStamp, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* endCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWN_OFFSET))(this, title, timerTitle, timeStamp, endCall);
		}

		::System::Void ShowCountDownAndProgress(::System::String* title, ::System::String* timerTitle, ::System::Int64 timeStamp, ::System::Int32 leftNum, ::System::Int32 rightNum, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* endCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWNANDPROGRESS_OFFSET))(this, title, timerTitle, timeStamp, leftNum, rightNum, endCall);
		}

		::System::Void SetActivityQuestStateProgress(::Class_1_F6FF1F4D17D6D345* newQuestHandler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F6FF1F4D17D6D345*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETACTIVITYQUESTSTATEPROGRESS_OFFSET))(this, newQuestHandler);
		}

		::System::Void SetPopTipInfo(::System::Boolean active, ::System::String* tipKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETPOPTIPINFO_OFFSET))(this, active, tipKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
