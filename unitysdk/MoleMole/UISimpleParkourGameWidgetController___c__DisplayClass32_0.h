#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISimpleParkourGameWidgetController; }

#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152B8980)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS32_0__TRYSWITCHTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x152B8990)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourGameWidgetController___c__DisplayClass32_0_TypeDefinitionIndex = 83830;

	class UISimpleParkourGameWidgetController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UISimpleParkourGameWidgetController* __4__this; // 0x10
		::MoleMole::MiniUIGame::SimpleParkour::ETrackType targetTrack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySwitchTrack_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS32_0__TRYSWITCHTRACK_B__0_OFFSET))(this);
		}
	};
}
