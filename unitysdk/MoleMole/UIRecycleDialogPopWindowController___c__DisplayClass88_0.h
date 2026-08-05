#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2FF20)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS88_0__SELECTEQUIPFORNOTCONSOLE_B__0_OFFSET UNITYSDK_OFFSET(0x17E2FF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass88_0_TypeDefinitionIndex = 67831;

	class UIRecycleDialogPopWindowController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::UInt64 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectEquipForNotConsole_b__0(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS88_0__SELECTEQUIPFORNOTCONSOLE_B__0_OFFSET))(this, x);
		}
	};
}
