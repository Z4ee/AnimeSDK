#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS123_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C11C60)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS123_0__PREPARESTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15C11C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass123_0_TypeDefinitionIndex = 40743;

	class UIRidusGotBooPageController___c__DisplayClass123_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS123_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PrepareStage_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS123_0__PREPARESTAGE_B__0_OFFSET))(this);
		}
	};
}
