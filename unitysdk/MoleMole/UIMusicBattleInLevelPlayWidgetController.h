#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5D5F44BBB4D4282F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMusicBattleInLevelInteractWidgetController; }
namespace MoleMole { class UIMusicBattleInLevelPlayMoveWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET UNITYSDK_OFFSET(0x15C78410)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x15C781F0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ADDTICK_OFFSET UNITYSDK_OFFSET(0x15C78310)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_GET_MUSICBATTLEPLAYROW_OFFSET UNITYSDK_OFFSET(0x15C77710)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x15C77EF0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C77A00)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C77A90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C77770)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C77830)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x15C77C20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0x15C77B20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x15C78050)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x15C77920)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C785C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__ONUIINIT_B__15_0_OFFSET UNITYSDK_OFFSET(0x15C78720)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C789A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C78A30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C78AC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C78B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPlayWidgetController_TypeDefinitionIndex = 56822;

	class UIMusicBattleInLevelPlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5D5F44BBB4D4282F* _view; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* _cachedWidgets; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* _runningWidgets; // 0x2C8
		::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* _returnToCache; // 0x2D0
		::System::Single _lastFeverProgress; // 0x2D8
		::System::Single _feverTime; // 0x2DC
		::System::Boolean _isPlayingFever; // 0x2E0
		::System::Boolean _isPlayingBonus; // 0x2E1
		::System::Single _tickedFeverTime; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_30A064D7BE47C07D<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>* get_MusicBattlePlayRow()
		{
			return ((::Class_3_30A064D7BE47C07D<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_GET_MUSICBATTLEPLAYROW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayMoveAnimation(::System::Int32 key, ::System::Single moveTime, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET))(this, key, moveTime, color);
		}

		::System::Void KillMoveAnimation(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET))(this, key);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateFeverProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET))(this, progress);
		}

		::System::Void ActivateFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET))(this, feverTime);
		}

		::System::Void ActivateBonus(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET))(this, activated);
		}

		::System::Void AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ADDTICK_OFFSET))(this);
		}

		::System::Void RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_REMOVETICK_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__15_0(::System::Int32 k, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__ONUIINIT_B__15_0_OFFSET))(this, k, w);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
