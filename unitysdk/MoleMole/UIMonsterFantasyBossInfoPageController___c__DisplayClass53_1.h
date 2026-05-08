#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_14;
namespace MoleMole { class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_0; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__BUILDCLIENTMONSTERINFO_B__1_OFFSET UNITYSDK_OFFSET(0x14846970)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14846960)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_1_TypeDefinitionIndex = 79954;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyBossInfoPageController___c__DisplayClass53_0* CS___8__locals1; // 0x10
		::System::Int32 i1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__1(::Class_3_9F091E965E210217_14* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F091E965E210217_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__BUILDCLIENTMONSTERINFO_B__1_OFFSET))(this, x);
		}
	};
}
