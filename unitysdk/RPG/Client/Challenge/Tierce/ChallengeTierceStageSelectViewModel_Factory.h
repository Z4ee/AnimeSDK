#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1397;
class Class_1_19DB14C0C5CFE108;
class Class_1_56190D054EB32434;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamInfoProviderViewModel_Factory; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA177A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA17780)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectViewModel_Factory_TypeDefinitionIndex = 80296;

	class ChallengeTierceStageSelectViewModel_Factory : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* _StageFactory; // 0x10
		::Class_1_19DB14C0C5CFE108* _TeamConflictCheckService; // 0x18
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel_Factory* _TeamInfoProviderFactory; // 0x20
		::Class_0_16E4307DCC419505_1397* _WindowService; // 0x28
		::Class_1_56190D054EB32434* _Repository; // 0x30

		::System::Void _ctor(::Class_1_56190D054EB32434* a1, ::Class_0_16E4307DCC419505_1397* a2, ::Class_1_19DB14C0C5CFE108* a3, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel_Factory* a4, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56190D054EB32434*, ::Class_0_16E4307DCC419505_1397*, ::Class_1_19DB14C0C5CFE108*, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* Create(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
