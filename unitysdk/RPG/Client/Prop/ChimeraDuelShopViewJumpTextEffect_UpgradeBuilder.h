#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_UPGRADEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0xADD9D30)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_UPGRADEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0xADD9CB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder_TypeDefinitionIndex = 71862;

	class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _CacheA; // 0x10
		::RPG::Client::ChimeraDuelGameSessionChimera* _CacheB; // 0x18
		::System::Int32 TargetSlot; // 0x20

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a, ::RPG::Client::ChimeraDuelGameSessionChimera* b)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_UPGRADEBUILDER__CTOR_OFFSET))(this, a, b);
		}

		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* Build(::RPG::Client::ChimeraDuelGameSessionChimera* upgradeResult)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_UPGRADEBUILDER_BUILD_OFFSET))(this, upgradeResult);
		}
	};
}
