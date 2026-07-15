#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_40AE727D3B9BFECD_OFFSET UNITYSDK_OFFSET(0x1B9E4260)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_46A302DA86A9F68E_OFFSET UNITYSDK_OFFSET(0x1B9E42A0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_768CA69FD1FBB4C9_OFFSET UNITYSDK_OFFSET(0x1B9E4410)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_F273FC6357A93CA8_OFFSET UNITYSDK_OFFSET(0x1B9E43E0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E4290)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesLandAvailableForPurchase_TypeDefinitionIndex = 9958;

	class ByIsPlanetFesLandAvailableForPurchase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_40AE727D3B9BFECD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_40AE727D3B9BFECD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46A302DA86A9F68E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_46A302DA86A9F68E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F273FC6357A93CA8(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_F273FC6357A93CA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_768CA69FD1FBB4C9(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_METHOD_4_768CA69FD1FBB4C9_OFFSET))(a1, a2);
		}
	};
}
