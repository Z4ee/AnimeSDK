#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
class Class_3_9FEE7E7D3F46814D_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x184F41C0)
#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184F41B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0_TypeDefinitionIndex = 64171;

	class UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Class_3_9FEE7E7D3F46814D_5* serverInfo; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__0(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET))(this, x);
		}
	};
}
