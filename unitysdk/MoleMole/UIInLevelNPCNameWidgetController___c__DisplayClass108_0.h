#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelNPCNameWidgetController; }

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1000)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS108_0___PLAYARROWANIM_B__0_OFFSET UNITYSDK_OFFSET(0x177C1010)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController___c__DisplayClass108_0_TypeDefinitionIndex = 61985;

	class UIInLevelNPCNameWidgetController___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelNPCNameWidgetController* __4__this; // 0x10
		::System::Boolean isShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayArrowAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS108_0___PLAYARROWANIM_B__0_OFFSET))(this);
		}
	};
}
