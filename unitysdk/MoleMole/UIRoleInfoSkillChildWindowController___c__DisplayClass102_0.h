#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RoleTweakColorData; }
namespace MoleMole { class UIRoleInfoSkillChildWindowController; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F750F0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__ONUNLOCKTALENTANIMPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x15F75100)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__ONUNLOCKTALENTANIMPLAY_B__1_OFFSET UNITYSDK_OFFSET(0x15F75390)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass102_0_TypeDefinitionIndex = 45386;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoSkillChildWindowController* __4__this; // 0x10
		::MoleMole::RoleTweakColorData* tweakColorData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUnlockTalentAnimPlay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__ONUNLOCKTALENTANIMPLAY_B__0_OFFSET))(this);
		}

		::System::Void _OnUnlockTalentAnimPlay_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS102_0__ONUNLOCKTALENTANIMPLAY_B__1_OFFSET))(this);
		}
	};
}
