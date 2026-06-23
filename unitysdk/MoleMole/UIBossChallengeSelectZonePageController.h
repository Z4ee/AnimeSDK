#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_7B15B3118FE590CD_37;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1760BEF0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1760BF00)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1760C640)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1760BF90)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1760C6B0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1760C710)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1760C7A0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1760C7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeSelectZonePageController_TypeDefinitionIndex = 80094;

	class UIBossChallengeSelectZonePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7B15B3118FE590CD_37* _view; // 0x318
		::System::String* HadalZone_BetaEntrance_Option01; // 0x320
		::System::String* HadalZone_BetaEntrance_Option02; // 0x328
		::System::String* HadalZone_BetaEntrance_Option03; // 0x330

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
