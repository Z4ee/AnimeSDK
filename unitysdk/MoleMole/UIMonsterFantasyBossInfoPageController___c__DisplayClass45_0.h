#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
namespace MoleMole { class UIMonsterFantasyBossInfoPageController; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183420B0)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS45_0__ONUIOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x183420C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass45_0_TypeDefinitionIndex = 49465;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyBossInfoPageController* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__2(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS45_0__ONUIOPEN_B__2_OFFSET))(this, x);
		}
	};
}
