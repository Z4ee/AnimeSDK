#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A726C0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS157_0__SHOWEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x16A726D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass157_0_TypeDefinitionIndex = 51551;

	class UIPlayerAccessoryPageController___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowEffect_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS157_0__SHOWEFFECT_B__0_OFFSET))(this);
		}
	};
}
