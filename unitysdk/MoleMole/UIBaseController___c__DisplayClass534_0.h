#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED0830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass534_0_TypeDefinitionIndex = 70932;

	class UIBaseController___c__DisplayClass534_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Boolean playToEnd; // 0x18
		::System::Single speed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_0__CTOR_OFFSET))(this);
		}
	};
}
