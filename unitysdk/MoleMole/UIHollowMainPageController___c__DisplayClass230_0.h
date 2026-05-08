#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole { class UIHollowResultContext; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS230_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0F9E0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS230_0__EXITHOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0x14A0F9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass230_0_TypeDefinitionIndex = 44935;

	class UIHollowMainPageController___c__DisplayClass230_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultContext* hollowResultContext; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS230_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitHollow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS230_0__EXITHOLLOW_B__0_OFFSET))(this);
		}
	};
}
