#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
class Class_3_9FEE7E7D3F46814D_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18675F50)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18675F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_0_TypeDefinitionIndex = 49452;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x10
		::Class_3_9FEE7E7D3F46814D_5* serverInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__0(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET))(this, x);
		}
	};
}
