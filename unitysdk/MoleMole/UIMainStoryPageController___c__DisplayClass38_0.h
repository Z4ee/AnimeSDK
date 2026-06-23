#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178AF1A0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS38_0__HIDETAPEDECKINFO_G__HIDEDECKINFO_0_OFFSET UNITYSDK_OFFSET(0x178AF1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass38_0_TypeDefinitionIndex = 76828;

	class UIMainStoryPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideTapeDeckInfo_g__HideDeckInfo_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS38_0__HIDETAPEDECKINFO_G__HIDEDECKINFO_0_OFFSET))(this);
		}
	};
}
