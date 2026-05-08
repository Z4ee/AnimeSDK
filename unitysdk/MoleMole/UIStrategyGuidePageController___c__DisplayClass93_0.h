#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x145881E0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__JUMPTOROLEINFOPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x145881F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass93_0_TypeDefinitionIndex = 79274;

	class UIStrategyGuidePageController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleSelectContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _JumpToRoleInfoPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__JUMPTOROLEINFOPAGE_B__0_OFFSET))(this);
		}
	};
}
