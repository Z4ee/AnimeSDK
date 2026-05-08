#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E992A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS113_0__PLAYNPCFADESOUND_B__0_OFFSET UNITYSDK_OFFSET(0x13E992B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass113_0_TypeDefinitionIndex = 41776;

	class UIGalgamePageController___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::System::Boolean fadeIn; // 0x10
		::System::Boolean isDouble; // 0x11
		::MoleMole::GalGame::GalNPCLocation location; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeSound_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS113_0__PLAYNPCFADESOUND_B__0_OFFSET))(this);
		}
	};
}
