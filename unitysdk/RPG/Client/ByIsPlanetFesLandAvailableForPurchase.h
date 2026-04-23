#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_46A302DA86A9F68E_OFFSET UNITYSDK_OFFSET(0x185E4BB0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_E0D4AAC17B2156C4_OFFSET UNITYSDK_OFFSET(0x185E4AE0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x185E4B60)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesLandAvailableForPurchase_TypeDefinitionIndex = 10141;

	class ByIsPlanetFesLandAvailableForPurchase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0D4AAC17B2156C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_E0D4AAC17B2156C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46A302DA86A9F68E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_46A302DA86A9F68E_OFFSET))(a1, a2);
		}
	};
}
