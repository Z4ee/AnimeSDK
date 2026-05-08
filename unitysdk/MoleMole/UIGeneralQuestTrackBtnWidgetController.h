#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_16396D88BA38E0AB_1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_BINDGAMEPADBUTTON_OFFSET UNITYSDK_OFFSET(0x157A9D00)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_DOTOGGLETRACK_OFFSET UNITYSDK_OFFSET(0x157AACE0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157A9BF0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157A9C80)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157A9A20)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157A9B80)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x157A9EA0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157AB120)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__DOTOGGLETRACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x157AB260)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x157AB200)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_2_OFFSET UNITYSDK_OFFSET(0x157AB180)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_G__SETGRAPHICALPHA_7_1_OFFSET UNITYSDK_OFFSET(0x157AAC20)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157AB280)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157AB310)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157AB3A0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157AB430)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralQuestTrackBtnWidgetController_TypeDefinitionIndex = 48789;

	class UIGeneralQuestTrackBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_1* _view; // 0x2B8
		::Foundation::Coroutine::CoroutineHandle _trackBtnAnimHandle; // 0x2C0
		::System::Int32 _questID; // 0x2C4
		::Class_2_B4378B46E0020E85* _gamepadTrackBtn; // 0x2C8
		::Class_2_B4378B46E0020E85* _gamepadUntrackBtn; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindGamepadButton(::Class_2_B4378B46E0020E85* trackBtn, ::Class_2_B4378B46E0020E85* untrackBtn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_BINDGAMEPADBUTTON_OFFSET))(this, trackBtn, untrackBtn);
		}

		::System::Void RefreshView(::System::Int32 questID, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questID, playAnim);
		}

		::System::Void DoToggleTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_DOTOGGLETRACK_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET))(this);
		}

		static ::System::Void _RefreshView_g__SetGraphicAlpha_7_1(::UnityEngine::UI::Graphic* img, ::System::Single a)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_G__SETGRAPHICALPHA_7_1_OFFSET))(img, a);
		}

		::System::Void _DoToggleTrack_b__8_0(::System::Boolean ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__DOTOGGLETRACK_B__8_0_OFFSET))(this, ret);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
