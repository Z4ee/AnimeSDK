#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICpRoleSelectDifficultyScript; }
namespace MoleMole { class UICpRoleSelectOnlineChildWindowController; }

#define MOLEMOLE_UICPROLESELECTONLINECHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF10E0)
#define MOLEMOLE_UICPROLESELECTONLINECHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONENABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1FAF10F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectOnlineChildWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 94733;

	class UICpRoleSelectOnlineChildWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UICpRoleSelectDifficultyScript* sc; // 0x10
		::MoleMole::UICpRoleSelectOnlineChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTONLINECHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTONLINECHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONENABLE_B__0_OFFSET))(this);
		}
	};
}
