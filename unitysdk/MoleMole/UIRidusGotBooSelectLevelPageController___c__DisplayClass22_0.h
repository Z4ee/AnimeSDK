#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_125;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16687410)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__0_OFFSET UNITYSDK_OFFSET(0x16687420)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__1_OFFSET UNITYSDK_OFFSET(0x16687450)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass22_0_TypeDefinitionIndex = 39587;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x10
		::System::Int32 levelType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLevelTypeUnlocked_b__0(::Class_2_208CC9941471731A_125* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_125*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__0_OFFSET))(this, x);
		}

		::System::Boolean _IsLevelTypeUnlocked_b__1(::Class_2_208CC9941471731A_125* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_125*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__1_OFFSET))(this, x);
		}
	};
}
