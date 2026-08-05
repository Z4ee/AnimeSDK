#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE7B50)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__ONADDBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17AE7B60)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass83_0_TypeDefinitionIndex = 82714;

	class UILineupSelectPageController___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController* __4__this; // 0x10
		::MoleMole::UIRoleSelectPageContext* roleInfoPageContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__ONADDBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
