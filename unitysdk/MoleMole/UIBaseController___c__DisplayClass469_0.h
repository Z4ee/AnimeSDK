#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS469_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142D00F0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS469_0__PLAYANIMANDBLOCKINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x142D0100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass469_0_TypeDefinitionIndex = 70928;

	class UIBaseController___c__DisplayClass469_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Action* afterAnimAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS469_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimAndBlockInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS469_0__PLAYANIMANDBLOCKINPUT_B__0_OFFSET))(this);
		}
	};
}
