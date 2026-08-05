#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITriDiceOracleInfoDialogOpenContext; }

#define MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15140A50)
#define MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15140A60)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleMissionDialogPopWindowController___c__DisplayClass7_0_TypeDefinitionIndex = 40543;

	class UITriDiceOracleMissionDialogPopWindowController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UITriDiceOracleInfoDialogOpenContext* popContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__ONSHOW_B__0_OFFSET))(this);
		}
	};
}
