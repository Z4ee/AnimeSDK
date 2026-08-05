#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITriDiceOracleDialogPopWindowController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A024C0)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SHOWONLYONETIP_B__0_OFFSET UNITYSDK_OFFSET(0x11A024D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController___c__DisplayClass63_0_TypeDefinitionIndex = 89294;

	class UITriDiceOracleDialogPopWindowController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::MoleMole::UITriDiceOracleDialogPopWindowController* __4__this; // 0x10
		::UnityEngine::Animation* animation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOnlyOneTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SHOWONLYONETIP_B__0_OFFSET))(this);
		}
	};
}
