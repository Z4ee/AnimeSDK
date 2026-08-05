#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePVPPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18508940)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS79_0__SHOWINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x18508950)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c__DisplayClass79_0_TypeDefinitionIndex = 66540;

	class UIAutoBattlePVPPageController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePVPPageController* __4__this; // 0x10
		::System::Action* recursiveShowInvite; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowInvite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS79_0__SHOWINVITE_B__0_OFFSET))(this);
		}
	};
}
