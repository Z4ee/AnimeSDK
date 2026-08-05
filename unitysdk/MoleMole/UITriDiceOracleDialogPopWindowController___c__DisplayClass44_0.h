#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2B7C0)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__PLAYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x11E2B7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0_TypeDefinitionIndex = 89301;

	class UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* effect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PlayEffect_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__PLAYEFFECT_B__0_OFFSET))(this);
		}
	};
}
