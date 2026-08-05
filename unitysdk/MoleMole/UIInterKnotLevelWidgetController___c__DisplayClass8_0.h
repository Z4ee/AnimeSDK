#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotLevelWidgetController; }

#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A00680)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotLevelWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 59649;

	class UIInterKnotLevelWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotLevelWidgetController* __4__this; // 0x10
		::System::Int32 maxExp; // 0x18
		::System::Int32 curLv; // 0x1C
		::System::Int32 remainExp; // 0x20
		::System::Int32 expNeededForNxtLv; // 0x24
		::System::Int32 maxLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}
	};
}
