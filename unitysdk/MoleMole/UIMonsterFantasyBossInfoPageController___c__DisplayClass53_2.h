#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
class Class_3_EDF31E1B77FE3774;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__BUILDCLIENTMONSTERINFO_B__5_OFFSET UNITYSDK_OFFSET(0x181F70B0)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__CTOR_OFFSET UNITYSDK_OFFSET(0x181F70A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_2_TypeDefinitionIndex = 50837;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_2 : public ::System::Object
	{
	public:
		::Class_3_EDF31E1B77FE3774* serverInfo; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__5(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__BUILDCLIENTMONSTERINFO_B__5_OFFSET))(this, x);
		}
	};
}
