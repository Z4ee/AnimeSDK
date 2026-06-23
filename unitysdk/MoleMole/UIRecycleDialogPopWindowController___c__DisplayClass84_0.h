#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1614BF50)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__SELECTEQUIPFORCONSOLE_B__0_OFFSET UNITYSDK_OFFSET(0x1614BF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass84_0_TypeDefinitionIndex = 45868;

	class UIRecycleDialogPopWindowController___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::System::UInt64 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectEquipForConsole_b__0(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__SELECTEQUIPFORCONSOLE_B__0_OFFSET))(this, x);
		}
	};
}
