#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"

namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0x18FEF040)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0x18FEF070)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEF050)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewDataUpdateEffect_TypeDefinitionIndex = 74405;

	class ChimeraDuelShopViewDataUpdateEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT_GET_CHIMERA_OFFSET))(this);
		}

		::System::Void VisitTargets(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWDATAUPDATEEFFECT_VISITTARGETS_OFFSET))(this, a1);
		}
	};
}
