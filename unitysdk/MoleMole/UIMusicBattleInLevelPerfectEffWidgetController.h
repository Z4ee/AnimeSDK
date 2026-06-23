#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7AA01DA713CC33A9_3;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EAE680)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EAE710)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EAE590)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_PLAYEFFANIM_OFFSET UNITYSDK_OFFSET(0x16EAE790)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAEBA0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EAEC00)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EAEC90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EAED20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPerfectEffWidgetController_TypeDefinitionIndex = 77039;

	class UIMusicBattleInLevelPerfectEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7AA01DA713CC33A9_3* _view; // 0x2C0
		::System::Single _animLength; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle _effAnim; // 0x2CC

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
