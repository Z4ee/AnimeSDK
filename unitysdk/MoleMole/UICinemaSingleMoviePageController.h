#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E2714210413A69CA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_26F71DED66AFE0B6;
class Class_2_4B74629A4EA5100A;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_EXITPREPPAGE_OFFSET UNITYSDK_OFFSET(0x158D3670)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x158D2380)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITFIRSTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x158D2D00)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x158D2720)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSINGLELEVELMOVIE_OFFSET UNITYSDK_OFFSET(0x158D3390)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSTARTSINGLELEVEL_OFFSET UNITYSDK_OFFSET(0x158D33E0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158D2390)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x158D2C20)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158D2B20)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158D2BB0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158D2420)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHDIFFICULT_OFFSET UNITYSDK_OFFSET(0x158D1C80)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x158D1B90)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRANKINFO_OFFSET UNITYSDK_OFFSET(0x158D1D90)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET UNITYSDK_OFFSET(0x158D1880)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_RESETCLICKMASK_OFFSET UNITYSDK_OFFSET(0x158D37F0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_SETNOWINDEX_OFFSET UNITYSDK_OFFSET(0x158D3030)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158D3840)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158D3900)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x158D3990)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158D3A80)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158D3A90)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158D3AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController_TypeDefinitionIndex = 48502;

	class UICinemaSingleMoviePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Il2CppArray<::Enum_3_E2714210413A69CA>* pointLevels; // 0x310
		::Class_2_26F71DED66AFE0B6* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_2_4B74629A4EA5100A*>* movieLevelList; // 0x320
		::Class_2_4B74629A4EA5100A* nowSelectLevelData; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* rewardLevelRowList; // 0x330
		::System::Boolean _isClickedEnterGame; // 0x338
		::System::Int32 nowIndex; // 0x33C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshRightInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET))(this);
		}

		::System::Void RefreshMovieInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET))(this);
		}

		::System::Void RefreshDifficult(::System::Int32 levelDifficult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHDIFFICULT_OFFSET))(this, levelDifficult);
		}

		::System::Void RefreshRankInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRANKINFO_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 InitFirstSelectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITFIRSTSELECTLEVEL_OFFSET))(this);
		}

		::System::Void OnClickSingleLevelMovie(::System::Int32 clickIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSINGLELEVELMOVIE_OFFSET))(this, clickIndex);
		}

		::System::Void SetNowIndex(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_SETNOWINDEX_OFFSET))(this, selectIndex);
		}

		::System::Void OnClickStartSingleLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSTARTSINGLELEVEL_OFFSET))(this);
		}

		::System::Void ExitPrepPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_EXITPREPPAGE_OFFSET))(this);
		}

		::System::Void ResetClickMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_RESETCLICKMASK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
