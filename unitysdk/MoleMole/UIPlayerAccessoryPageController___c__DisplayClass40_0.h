#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1835D6B0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS40_0__SETUPSELLINGPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x1835D6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass40_0_TypeDefinitionIndex = 51565;

	class UIPlayerAccessoryPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::System::UInt32 targetSkinComboID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupSellingPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS40_0__SETUPSELLINGPANEL_B__0_OFFSET))(this);
		}
	};
}
