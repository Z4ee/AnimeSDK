#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19866690)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOWTAPE_B__0_OFFSET UNITYSDK_OFFSET(0x198666A0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOWTAPE_B__1_OFFSET UNITYSDK_OFFSET(0x19866760)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass16_0_TypeDefinitionIndex = 84564;

	class UIMainStoryPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowTape_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOWTAPE_B__0_OFFSET))(this);
		}

		::System::Void _OnShowTape_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOWTAPE_B__1_OFFSET))(this);
		}
	};
}
