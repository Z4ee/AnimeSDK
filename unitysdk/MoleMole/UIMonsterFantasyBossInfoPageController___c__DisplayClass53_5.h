#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
class Class_2_33E254D31CBA72CB;

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__BUILDCLIENTMONSTERINFO_B__14_OFFSET UNITYSDK_OFFSET(0x15F04010)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15F04000)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_5_TypeDefinitionIndex = 50838;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_5 : public ::System::Object
	{
	public:
		::Class_2_33E254D31CBA72CB* monster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__14(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__BUILDCLIENTMONSTERINFO_B__14_OFFSET))(this, x);
		}
	};
}
