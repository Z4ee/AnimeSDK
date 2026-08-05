#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerFishAquariumPageController___c__DisplayClass43_1; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_2__CHANGECAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x130314A0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13031490)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c__DisplayClass43_2_TypeDefinitionIndex = 40518;

	class UISummerFishAquariumPageController___c__DisplayClass43_2 : public ::System::Object
	{
	public:
		::MoleMole::UISummerFishAquariumPageController___c__DisplayClass43_1* CS___8__locals2; // 0x10
		::System::Single blendDuration; // 0x18
		::System::Single blendTimer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _ChangeCamera_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_2__CHANGECAMERA_B__0_OFFSET))(this);
		}
	};
}
