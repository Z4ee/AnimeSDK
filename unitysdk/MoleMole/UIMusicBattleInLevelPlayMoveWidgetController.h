#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7AA01DA713CC33A9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ADDTICK_OFFSET UNITYSDK_OFFSET(0x15296CC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x15296DC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152963F0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15296480)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152962F0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x15296AE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0x15296550)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x15296650)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15296E30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15296E90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15296F20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15296FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPlayMoveWidgetController_TypeDefinitionIndex = 45608;

	class UIMusicBattleInLevelPlayMoveWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7AA01DA713CC33A9* _view; // 0x2C0
		::System::Single _clickAnimTime; // 0x2C8
		::System::Single _moveTime; // 0x2CC
		::System::Int32 _key; // 0x2D0
		::MoleMole::Config::MusicBattleMarkerNodeType _color; // 0x2D4
		::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* _onCompleted; // 0x2D8
		::System::Boolean _isPlaying; // 0x2E0
		::System::Boolean _isKilled; // 0x2E1
		::System::Single _tickedTime; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void PlayMoveAnimation(::System::Int32 key, ::System::Single moveTime, ::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* onCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET))(this, key, moveTime, color, onCompleted);
		}

		::System::Void KillMoveAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET))(this);
		}

		::System::Void AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ADDTICK_OFFSET))(this);
		}

		::System::Void RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_REMOVETICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
