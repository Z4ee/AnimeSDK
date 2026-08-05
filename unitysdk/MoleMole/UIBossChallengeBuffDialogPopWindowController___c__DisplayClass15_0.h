#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossChallengeBuffDialogPopWindowController; }

#define MOLEMOLE_UIBOSSCHALLENGEBUFFDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1852F600)
#define MOLEMOLE_UIBOSSCHALLENGEBUFFDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SHOWBUFFS_B__0_OFFSET UNITYSDK_OFFSET(0x1852F610)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBuffDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 51515;

	class UIBossChallengeBuffDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossChallengeBuffDialogPopWindowController* __4__this; // 0x10
		::System::Int32 buffIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBUFFDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBuffs_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBUFFDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SHOWBUFFS_B__0_OFFSET))(this);
		}
	};
}
