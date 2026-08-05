#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIZenkovErosionProgressWidgetController_ShowState.h"

class Class_2_05CA472826BC0FB8_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }

#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ACTIVATERENDERING_OFFSET UNITYSDK_OFFSET(0x1148B210)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_DEACTIVATERENDERING_OFFSET UNITYSDK_OFFSET(0x1148B6A0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_GETFADEANIMDURATION_OFFSET UNITYSDK_OFFSET(0x1148CD50)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ISPLAYINGFADEANIM_OFFSET UNITYSDK_OFFSET(0x1148C640)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1148B0E0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1148BDF0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1148B170)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1148ADF0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1148B050)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1148C2B0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONZENKOVEROSIONVALUEFULL_OFFSET UNITYSDK_OFFSET(0x1148C7D0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1148B4C0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_SAMPLEFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x1148B8D0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_SETRECTSIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1148BE60)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1148BAC0)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1148CF10)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1148CF70)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1148D000)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1148D090)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1148D120)
#define MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1148D1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovErosionProgressWidgetController_TypeDefinitionIndex = 77997;

	class UIZenkovErosionProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single ProgressEpsilon; // 0x0
		// static const ::System::Int32 minRectSizeX = 0x12C; // 0x0
		// static const ::System::Int32 maxRectSizeX = 0x190; // 0x0
		::Class_2_05CA472826BC0FB8_1* _view; // 0x2C0
		::UnityEngine::UI::Extension::UILinearProgressBar* _progressBar1; // 0x2C8
		::System::Single _currentProgress; // 0x2D0
		::MoleMole::UIZenkovErosionProgressWidgetController_ShowState _showState; // 0x2D4
		::UnityEngine::Animation* _viewAnimation; // 0x2D8
		::System::Single _fadeOutTimer; // 0x2E0
		::System::Single _fadeOutDuration; // 0x2E4
		::System::Boolean _pendingInitHide; // 0x2E8
		::System::Boolean _renderingActive; // 0x2E9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ActivateRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ACTIVATERENDERING_OFFSET))(this);
		}

		::System::Void DeactivateRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_DEACTIVATERENDERING_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void OnZenkovErosionValueFull(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ONZENKOVEROSIONVALUEFULL_OFFSET))(this, args);
		}

		::System::Void SampleFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_SAMPLEFADEOUTEND_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Boolean IsPlayingFadeAnim(::System::String* animName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_ISPLAYINGFADEANIM_OFFSET))(this, animName);
		}

		::System::Single GetFadeAnimDuration(::System::String* animName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_GETFADEANIMDURATION_OFFSET))(this, animName);
		}

		::System::Void SetRectSizeDelta()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER_SETRECTSIZEDELTA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVEROSIONPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
