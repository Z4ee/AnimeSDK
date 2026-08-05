#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__BUILDCLIENTMONSTERINFO_B__13_OFFSET UNITYSDK_OFFSET(0x17E07B20)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17E07B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_4_TypeDefinitionIndex = 49454;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_4 : public ::System::Object
	{
	public:
		::System::Int32 monsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__13(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__BUILDCLIENTMONSTERINFO_B__13_OFFSET))(this, x);
		}
	};
}
