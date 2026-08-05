#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UISummerFishAquariumPageController; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x140CE190)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c__DisplayClass43_0_TypeDefinitionIndex = 40517;

	class UISummerFishAquariumPageController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UISummerFishAquariumPageController* __4__this; // 0x10
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}
	};
}
