#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157A37E0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS23_0__DORESET_B__0_OFFSET UNITYSDK_OFFSET(0x157A37F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourGameWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 83829;

	class UISimpleParkourGameWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onAnimEnd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoReset_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___C__DISPLAYCLASS23_0__DORESET_B__0_OFFSET))(this);
		}
	};
}
