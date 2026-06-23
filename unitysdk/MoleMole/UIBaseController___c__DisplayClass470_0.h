#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS470_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A67960)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS470_0__PLAYANIMANDBLOCKINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x18A67970)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass470_0_TypeDefinitionIndex = 76186;

	class UIBaseController___c__DisplayClass470_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Action* afterAnimAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS470_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimAndBlockInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS470_0__PLAYANIMANDBLOCKINPUT_B__0_OFFSET))(this);
		}
	};
}
