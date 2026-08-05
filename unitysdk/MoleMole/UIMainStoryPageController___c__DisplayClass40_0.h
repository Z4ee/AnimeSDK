#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183AF120)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_0__SHOWTAPEDECKINFO_G__SHOWDECKINFO_0_OFFSET UNITYSDK_OFFSET(0x183AF130)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass40_0_TypeDefinitionIndex = 84554;

	class UIMainStoryPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::System::Int32 vhsTemplateID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTapeDeckInfo_g__ShowDeckInfo_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_0__SHOWTAPEDECKINFO_G__SHOWDECKINFO_0_OFFSET))(this);
		}
	};
}
