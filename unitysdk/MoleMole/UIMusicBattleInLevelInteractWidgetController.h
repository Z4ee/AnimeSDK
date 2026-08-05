#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DC4020E41FD6C2B0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMusicBattleInLevelPerfectEffWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ANIMCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18676E80)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18676B60)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18676BF0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18676A30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET UNITYSDK_OFFSET(0x18676C70)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYPERFECTANIM_OFFSET UNITYSDK_OFFSET(0x18676F00)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18677170)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x18677290)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18677370)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18677400)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18677490)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelInteractWidgetController_TypeDefinitionIndex = 75351;

	class UIMusicBattleInLevelInteractWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DC4020E41FD6C2B0* _view; // 0x2C0
		::System::Single _animLength; // 0x2C8
		::System::Single _animEndTime; // 0x2CC
		::Foundation::Coroutine::CoroutineHandle _animCoroutine; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* _cachedWidgets; // 0x2D8
		::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* _returnToCache; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayHitBtnLink(::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Boolean isPerfect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET))(this, color, isPerfect);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AnimCoroutine()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ANIMCOROUTINE_OFFSET))(this);
		}

		::System::Void PlayPerfectAnim(::System::Boolean isPerfect, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYPERFECTANIM_OFFSET))(this, isPerfect, color);
		}

		::System::Void _OnUIInit_b__7_0(::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController* w)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, w);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
