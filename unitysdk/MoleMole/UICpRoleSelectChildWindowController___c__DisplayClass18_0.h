#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICpRoleSelectChildWindowController; }
namespace MoleMole { class UICpRoleSelectDifficultyScript; }

#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7781D0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__ONENABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1F7781E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectChildWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 94769;

	class UICpRoleSelectChildWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UICpRoleSelectChildWindowController* __4__this; // 0x10
		::MoleMole::UICpRoleSelectDifficultyScript* sc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__ONENABLE_B__0_OFFSET))(this);
		}
	};
}
