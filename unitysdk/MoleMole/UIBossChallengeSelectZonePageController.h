#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_79AE422BA06F6D26_224;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18E4CE10)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ISHARDZONE_OFFSET UNITYSDK_OFFSET(0x1855D2C0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E4CE20)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1855D250)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E4CEB0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1855D340)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1855D3B0)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1855D440)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1855D450)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeSelectZonePageController_TypeDefinitionIndex = 67092;

	class UIBossChallengeSelectZonePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_224* _view; // 0x318
		::System::String* HadalZone_BetaEntrance_Option01; // 0x320
		::System::String* HadalZone_BetaEntrance_Option02; // 0x328
		::System::String* HadalZone_BetaEntrance_Option03; // 0x330
		::System::String* HadalZone_BetaEntrance_Option04; // 0x338

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

		::System::Boolean IsHardZone(::Class_2_468A4FBF2E9F527C* hadalModel, ::System::Int32 zoneID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_468A4FBF2E9F527C*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER_ISHARDZONE_OFFSET))(this, hadalModel, zoneID);
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
