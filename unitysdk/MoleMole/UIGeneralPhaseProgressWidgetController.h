#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5E2FBACADDB625B7_30;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }

#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x18EBB030)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_MAINICONANIM_OFFSET UNITYSDK_OFFSET(0x18EBC3A0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EBAFA0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EBCC30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EBAED0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EBAF30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x18EBBB50)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PROGRESSBARANIM_OFFSET UNITYSDK_OFFSET(0x18EBBC10)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x18EBC8C0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBCCD0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EBCD30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EBCDC0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EBCE50)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EBCEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgressWidgetController_TypeDefinitionIndex = 70528;

	class UIGeneralPhaseProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_30* _view; // 0x2C0
		::DG::Tweening::Tween* _barHandler; // 0x2C8
		::DG::Tweening::Tween* _iconHandler; // 0x2D0
		::MoleMole::UIHollowProgressCircleRowWidgetController* _mainIconCircleCtrl; // 0x2D8
		::UnityEngine::Vector3 _mainIconStartPos; // 0x2E0
		::UnityEngine::Vector3 _mainIconTarPos; // 0x2EC
		::System::Single _tarProgressBarRectPosX; // 0x2F8
		::System::Boolean showMainIcon; // 0x2FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitProgressView(::System::Int32 lastLayer, ::System::Int32 currentLayer, ::System::Int32 maxLayer, ::System::Boolean showMainIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET))(this, lastLayer, currentLayer, maxLayer, showMainIcon);
		}

		::System::Void PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this);
		}

		::System::Void SetProgressImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET))(this);
		}

		::System::Void ProgressBarAnim(::System::Single tar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PROGRESSBARANIM_OFFSET))(this, tar);
		}

		::System::Void MainIconAnim(::MoleMole::UIHollowProgressCircleRowWidgetController* mainIconCircle, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 tar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowProgressCircleRowWidgetController*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_MAINICONANIM_OFFSET))(this, mainIconCircle, start, tar);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
