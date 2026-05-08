#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotLevelWidgetController; }

#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16092C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotLevelWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 63854;

	class UIInterKnotLevelWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotLevelWidgetController* __4__this; // 0x10
		::System::Int32 expNeededForNxtLv; // 0x18
		::System::Int32 remainExp; // 0x1C
		::System::Int32 curLv; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
