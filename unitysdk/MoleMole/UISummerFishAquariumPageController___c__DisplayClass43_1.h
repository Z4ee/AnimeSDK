#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UISummerFishAquariumPageController___c__DisplayClass43_0; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x119F5060)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c__DisplayClass43_1_TypeDefinitionIndex = 40520;

	class UISummerFishAquariumPageController___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::MoleMole::UISummerFishAquariumPageController___c__DisplayClass43_0* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 originEulerAngles; // 0x18
		::UnityEngine::Vector3 targetEulerAngles; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}
	};
}
