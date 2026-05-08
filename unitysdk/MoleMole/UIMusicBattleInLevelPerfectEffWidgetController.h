#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7AA01DA713CC33A9_1;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151F6ED0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151F6F60)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151F6DE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_PLAYEFFANIM_OFFSET UNITYSDK_OFFSET(0x151F6FE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151F73F0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151F7450)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151F74E0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151F7570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPerfectEffWidgetController_TypeDefinitionIndex = 80708;

	class UIMusicBattleInLevelPerfectEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7AA01DA713CC33A9_1* _view; // 0x2B8
		::System::Single _animLength; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _effAnim; // 0x2C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayEffAnim(::System::Boolean isPerfect, ::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* onCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_PLAYEFFANIM_OFFSET))(this, isPerfect, color, onCompleted);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
