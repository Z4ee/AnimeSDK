#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS117_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170EB660)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS117_0__PLAYNPCFADESOUND_B__0_OFFSET UNITYSDK_OFFSET(0x170EB670)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass117_0_TypeDefinitionIndex = 62811;

	class UIGalgamePageController___c__DisplayClass117_0 : public ::System::Object
	{
	public:
		::System::Boolean fadeIn; // 0x10
		::System::Boolean isDouble; // 0x11
		::MoleMole::GalGame::GalNPCLocation location; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS117_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeSound_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS117_0__PLAYNPCFADESOUND_B__0_OFFSET))(this);
		}
	};
}
