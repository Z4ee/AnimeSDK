#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController___c__DisplayClass47_0; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166BBE50)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__SETTERMCOLOR_B__8_OFFSET UNITYSDK_OFFSET(0x166BBF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController___c__DisplayClass47_1_TypeDefinitionIndex = 75653;

	class UIDataFixNodeWidgetController___c__DisplayClass47_1 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController___c__DisplayClass47_0* CS___8__locals1; // 0x10
		::System::Int32 total; // 0x18
		::System::Int32 activeCnt; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetTermColor_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__SETTERMCOLOR_B__8_OFFSET))(this);
		}
	};
}
