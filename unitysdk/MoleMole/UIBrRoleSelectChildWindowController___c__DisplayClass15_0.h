#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBrRoleSelectChildWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FFE60)
#define MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SWITCHINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1C500620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBrRoleSelectChildWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 83886;

	class UIBrRoleSelectChildWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* inAnim; // 0x10
		::MoleMole::UIBrRoleSelectChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SWITCHINFO_B__0_OFFSET))(this);
		}
	};
}
