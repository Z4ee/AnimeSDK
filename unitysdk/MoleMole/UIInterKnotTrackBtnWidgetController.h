#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_1138;
class Class_2_79F6D62CE30E3F8E_63;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETPAUSEICONTYPE_OFFSET UNITYSDK_OFFSET(0x18388A20)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETTRACKBTN_OFFSET UNITYSDK_OFFSET(0x18388C80)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183869B0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18388CE0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183868E0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18386940)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_PLAYPAUSEICONLOOPANIMS_OFFSET UNITYSDK_OFFSET(0x18388BB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_REFRESHTRACKBUTTON_OFFSET UNITYSDK_OFFSET(0x18386A40)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETIMAGEALPHA_OFFSET UNITYSDK_OFFSET(0x18388900)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETNOTRACKMODE_OFFSET UNITYSDK_OFFSET(0x18388170)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETPAUSEICONTYPE_OFFSET UNITYSDK_OFFSET(0x18388A90)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETTEXTALPHA_OFFSET UNITYSDK_OFFSET(0x18388990)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_STOPPAUSEICONLOOPANIMS_OFFSET UNITYSDK_OFFSET(0x18388830)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18388D60)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__6_0_OFFSET UNITYSDK_OFFSET(0x18388E00)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__6_1_OFFSET UNITYSDK_OFFSET(0x18388DC0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__SETNOTRACKMODE_B__13_0_OFFSET UNITYSDK_OFFSET(0x18388E10)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18388E20)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18388EB0)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18388F40)
#define MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18388FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotTrackBtnWidgetController_TypeDefinitionIndex = 46421;

	class UIInterKnotTrackBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 DefaultPauseIconType = 0x2; // 0x0
		::Class_2_79F6D62CE30E3F8E_63* _view; // 0x2C0
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

		::System::Int32 GetPauseIconType(::Class_2_208CC9941471731A_1138* pointTypeCfg)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1138*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_GETPAUSEICONTYPE_OFFSET))(this, pointTypeCfg);
		}

		::System::Void SetPauseIconType(::System::Int32 pauseIconType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_SETPAUSEICONTYPE_OFFSET))(this, pauseIconType);
		}

		::System::Void StopPauseIconLoopAnims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_STOPPAUSEICONLOOPANIMS_OFFSET))(this);
		}

		::System::Void PlayPauseIconLoopAnims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER_PLAYPAUSEICONLOOPANIMS_OFFSET))(this);
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

		::System::Void _RefreshTrackButton_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__6_1_OFFSET))(this);
		}

		::System::Void _RefreshTrackButton_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__REFRESHTRACKBUTTON_B__6_0_OFFSET))(this);
		}

		::System::Void _SetNoTrackMode_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTTRACKBTNWIDGETCONTROLLER__SETNOTRACKMODE_B__13_0_OFFSET))(this);
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
