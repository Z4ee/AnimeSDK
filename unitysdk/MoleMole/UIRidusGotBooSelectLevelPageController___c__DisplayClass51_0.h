#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_125;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F33080)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET UNITYSDK_OFFSET(0x15F33090)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0_TypeDefinitionIndex = 39593;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x10
		::System::Int32 intLevelType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectTab_b__0(::Class_2_208CC9941471731A_125* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_125*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET))(this, x);
		}
	};
}
