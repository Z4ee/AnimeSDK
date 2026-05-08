#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_877;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEB94400)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET UNITYSDK_OFFSET(0xEB94410)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0_TypeDefinitionIndex = 68328;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x10
		::System::Int32 intLevelType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectTab_b__0(::Class_2_208CC9941471731A_877* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET))(this, x);
		}
	};
}
