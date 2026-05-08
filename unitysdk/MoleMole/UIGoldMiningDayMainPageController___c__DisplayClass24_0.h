#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGoldMiningDayMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F961A0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x15F961B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 45840;

	class UIGoldMiningDayMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGoldMiningDayMainPageController* __4__this; // 0x10
		::System::Action* recursiveShowInvite; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowInvite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWINVITE_B__0_OFFSET))(this);
		}
	};
}
