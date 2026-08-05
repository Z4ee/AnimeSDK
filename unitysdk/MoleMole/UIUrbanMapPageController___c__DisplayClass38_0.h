#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77750)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__DISPLAYCLASS38_0__ONINPUTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x17D77760)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageController___c__DisplayClass38_0_TypeDefinitionIndex = 42216;

	class UIUrbanMapPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadNestedListDelegate* todoNestedListGamepad; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__DISPLAYCLASS38_0__ONINPUTACTION_B__0_OFFSET))(this);
		}
	};
}
