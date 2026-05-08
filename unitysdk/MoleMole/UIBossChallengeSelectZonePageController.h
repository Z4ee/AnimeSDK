#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_7B15B3118FE590CD_19;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16810E80)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16810E90)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16811650)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16810F20)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168116C0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16811720)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168117B0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168117C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeSelectZonePageController_TypeDefinitionIndex = 80123;

	class UIBossChallengeSelectZonePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7B15B3118FE590CD_19* _view; // 0x310
		::System::String* HadalZone_BetaEntrance_Option01; // 0x318
		::System::String* HadalZone_BetaEntrance_Option02; // 0x320
		::System::String* HadalZone_BetaEntrance_Option03; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
