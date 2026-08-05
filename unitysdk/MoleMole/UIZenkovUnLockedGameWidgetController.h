#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_79;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovQTEProgressBarWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A22B80)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x11A22C10)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A22F40)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A22A40)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A22AA0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETCOLORBYTYPE_OFFSET UNITYSDK_OFFSET(0x11A23940)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETUPHINTTEXT_OFFSET UNITYSDK_OFFSET(0x11A22CA0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETUP_OFFSET UNITYSDK_OFFSET(0x11A22FD0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SHOWHITRESULT_OFFSET UNITYSDK_OFFSET(0x11A232A0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SIZETYPETOPIXEL_OFFSET UNITYSDK_OFFSET(0x11A238E0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_STARTNEWROUND_OFFSET UNITYSDK_OFFSET(0x11A23CF0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATECIRCLESCALE_OFFSET UNITYSDK_OFFSET(0x11A23200)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x11A23780)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x11A235F0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A23DB0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A23E10)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x11A23EA0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A23F30)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A23FC0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A24050)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovUnLockedGameWidgetController_TypeDefinitionIndex = 46266;

	class UIZenkovUnLockedGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_79* _view; // 0x2C0
		::MoleMole::UIZenkovQTEProgressBarWidgetController* _progressBarController; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Setup(::System::Int32 totalRound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETUP_OFFSET))(this, totalRound);
		}

		::System::Void UpdateCircleScale(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATECIRCLESCALE_OFFSET))(this, ratio);
		}

		::System::Void ShowHitResult(::Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465 result, ::System::Action* onAnimFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SHOWHITRESULT_OFFSET))(this, result, onAnimFinished);
		}

		::System::Void UpdateProgress(::System::Int32 successCount, ::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET))(this, successCount, currentProgress, totalProgress);
		}

		::System::Void UpdateProgressBar(::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_UPDATEPROGRESSBAR_OFFSET))(this, currentProgress, totalProgress);
		}

		static ::System::Single SizeTypeToPixel(::System::Int32 sizeType)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SIZETYPETOPIXEL_OFFSET))(sizeType);
		}

		::System::Void SetColorByType(::System::Int32 sizeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETCOLORBYTYPE_OFFSET))(this, sizeType);
		}

		::System::Void StartNewRound(::System::Int32 sizeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_STARTNEWROUND_OFFSET))(this, sizeType);
		}

		::System::Void SetupHintText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER_SETUPHINTTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
