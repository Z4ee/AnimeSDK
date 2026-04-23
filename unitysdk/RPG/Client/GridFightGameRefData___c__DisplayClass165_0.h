#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B;
class Class_1_C0277CE3A38B20B6;
namespace RPG::Client { class GridFightGameRefData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CA780)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xA4CFC30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_0_TypeDefinitionIndex = 59581;

	class GridFightGameRefData___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* rules; // 0x10
		::System::Collections::Generic::List_1<::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B*>* appendingFinalRoles; // 0x18
		::RPG::Client::GridFightGameRefData* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
		}

		::System::Void __CollectEquipsAndTrait_b__0(::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET))(this, role);
		}
	};
}
