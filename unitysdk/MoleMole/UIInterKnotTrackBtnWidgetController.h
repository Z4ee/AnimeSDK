#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_157;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETTRACKBTN_OFFSET UNITYSDK_OFFSET(0x15A59080)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A572C0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A590E0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A571F0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A57250)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_REFRESHTRACKBUTTON_OFFSET UNITYSDK_OFFSET(0x15A57350)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETIMAGEALPHA_OFFSET UNITYSDK_OFFSET(0x15A58F60)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETNOTRACKMODE_OFFSET UNITYSDK_OFFSET(0x15A58AA0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETTEXTALPHA_OFFSET UNITYSDK_OFFSET(0x15A58FF0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A59160)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_0_OFFSET UNITYSDK_OFFSET(0x15A59260)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__5_1_OFFSET UNITYSDK_OFFSET(0x15A591C0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__SETNOTRACKMODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x15A592E0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A59360)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A593F0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A59480)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A59510)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotTrackBtnWidgetController_TypeDefinitionIndex = 78508;

	class UIInterKnotTrackBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_157* _view; // 0x2B8
		::Foundation::Coroutine::CoroutineHandle _trackBtnAnimHandle; // 0x2C0

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
