#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_6341039499F27211;
class Class_2_79F6D62CE30E3F8E_70;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x15E847B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E845F0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E84680)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E84720)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E84470)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E844D0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETACTIVITYQUESTSTATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x15E855E0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15E84800)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETPOPTIPINFO_OFFSET UNITYSDK_OFFSET(0x15E85670)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x15E84B30)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWNANDPROGRESS_OFFSET UNITYSDK_OFFSET(0x15E852A0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15E85010)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESSICON_OFFSET UNITYSDK_OFFSET(0x15E84A60)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x15E848B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLEONWHOLEROW_OFFSET UNITYSDK_OFFSET(0x15E84E70)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SHOWTITLE_OFFSET UNITYSDK_OFFSET(0x15E84CD0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E857B0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E85810)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E858A0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E85940)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E859D0)
#define MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E85A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompRowTaskListWidgetController_TypeDefinitionIndex = 51386;

	class UIActivityCompRowTaskListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_70* _view; // 0x2B8
		::Class_1_6341039499F27211* questStateHandler; // 0x2C0

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

		::Class_2_79F6D62CE30E3F8E_70* GetView()
		{
			return ((::Class_2_79F6D62CE30E3F8E_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
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

		::System::Void SetActivityQuestStateProgress(::Class_1_6341039499F27211* newQuestHandler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6341039499F27211*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPROWTASKLISTWIDGETCONTROLLER_SETACTIVITYQUESTSTATEPROGRESS_OFFSET))(this, newQuestHandler);
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
