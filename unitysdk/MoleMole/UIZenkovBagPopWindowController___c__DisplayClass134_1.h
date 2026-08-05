#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class UIZenkovBagPopWindowController___c__DisplayClass134_0; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17496250)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_1__ONGAMEPADMODULESELECTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1749DC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c__DisplayClass134_1_TypeDefinitionIndex = 79230;

	class UIZenkovBagPopWindowController___c__DisplayClass134_1 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovBagPopWindowController___c__DisplayClass134_0* CS___8__locals1; // 0x10
		::MonoUITableScrollV2* scrollView; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnGamepadModuleSelectIndex_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_1__ONGAMEPADMODULESELECTINDEX_B__0_OFFSET))(this);
		}
	};
}
