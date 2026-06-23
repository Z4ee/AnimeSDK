#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_33;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETTRACKBTN_OFFSET UNITYSDK_OFFSET(0x17127CD0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17125CA0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17127D30)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17125BD0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17125C30)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_REFRESHTRACKBUTTON_OFFSET UNITYSDK_OFFSET(0x17125D30)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETIMAGEALPHA_OFFSET UNITYSDK_OFFSET(0x17127BB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETNOTRACKMODE_OFFSET UNITYSDK_OFFSET(0x17127490)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETTEXTALPHA_OFFSET UNITYSDK_OFFSET(0x17127C40)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17127DB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_0_OFFSET UNITYSDK_OFFSET(0x17127EB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_1_OFFSET UNITYSDK_OFFSET(0x17127E10)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__SETNOTRACKMODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x17127F30)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17127FB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17128040)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171280D0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17128160)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotTrackBtnWidgetController_TypeDefinitionIndex = 54432;

	class UIInterKnotTrackBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_33* _view; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _trackBtnAnimHandle; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshTrackButton(::System::Boolean anim, ::System::Int32 manualQuestID, ::MoleMole::MonoGamepadScrollView* DetailScrollView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::MoleMole::MonoGamepadScrollView*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_REFRESHTRACKBUTTON_OFFSET))(this, anim, manualQuestID, DetailScrollView);
		}

		::System::Void SetImageAlpha(::UnityEngine::UI::Image* img, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETIMAGEALPHA_OFFSET))(this, img, a);
		}

		::System::Void SetTextAlpha(::UnityEngine::UI::Text* txt, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETTEXTALPHA_OFFSET))(this, txt, a);
		}

		::System::Void SetNoTrackMode(::System::Boolean showInvitePartnerDate, ::System::Boolean trackable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETNOTRACKMODE_OFFSET))(this, showInvitePartnerDate, trackable);
		}

		::Class_2_B4378B46E0020E85* GetTrackBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETTRACKBTN_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _RefreshTrackButton_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_1_OFFSET))(this);
		}

		::System::Void _RefreshTrackButton_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_0_OFFSET))(this);
		}

		::System::Void _SetNoTrackMode_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__SETNOTRACKMODE_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
