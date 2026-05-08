#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E740)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS99_0__SELECTEQUIPFORUID_B__0_OFFSET UNITYSDK_OFFSET(0x12E9E750)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c__DisplayClass99_0_TypeDefinitionIndex = 72584;

	class UIVideoshopForgeWidgetChildWindowController___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::System::UInt64 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectEquipForUid_b__0(::Class_1_1685EC66FBD28897* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS99_0__SELECTEQUIPFORUID_B__0_OFFSET))(this, x);
		}
	};
}
