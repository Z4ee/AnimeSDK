#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E2714210413A69CA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_4B74629A4EA5100A;
class Class_2_4BAF3A13FE84B3BC;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_EXITPREPPAGE_OFFSET UNITYSDK_OFFSET(0x195857D0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x195844D0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITFIRSTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x19584E60)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19584870)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSINGLELEVELMOVIE_OFFSET UNITYSDK_OFFSET(0x195854E0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSTARTSINGLELEVEL_OFFSET UNITYSDK_OFFSET(0x19585530)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195844E0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19584D70)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19584C70)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19584D00)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19584570)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHDIFFICULT_OFFSET UNITYSDK_OFFSET(0x19583E20)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x19583CE0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRANKINFO_OFFSET UNITYSDK_OFFSET(0x19583F30)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET UNITYSDK_OFFSET(0x195839D0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_RESETCLICKMASK_OFFSET UNITYSDK_OFFSET(0x19585950)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_SETNOWINDEX_OFFSET UNITYSDK_OFFSET(0x19585180)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195859A0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19585A60)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19585AF0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19585BE0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19585BF0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19585C00)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController_TypeDefinitionIndex = 50113;

	class UICinemaSingleMoviePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Il2CppArray<::Enum_3_E2714210413A69CA>* pointLevels; // 0x318
		::Class_2_4BAF3A13FE84B3BC* _view; // 0x320
		::System::Collections::Generic::List_1<::Class_2_4B74629A4EA5100A*>* movieLevelList; // 0x328
		::Class_2_4B74629A4EA5100A* nowSelectLevelData; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* rewardLevelRowList; // 0x338
		::System::Boolean _isClickedEnterGame; // 0x340
		::System::Int32 nowIndex; // 0x344

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
