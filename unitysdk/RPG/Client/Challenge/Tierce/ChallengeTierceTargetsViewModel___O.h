#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTargetsViewModel___O_TypeDefinitionIndex = 80254;

	class ChallengeTierceTargetsViewModel___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__2____DetermineStateForEngagementSettle()
		{
			return (::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTargetsViewModel___O_TypeDefinitionIndex)->GetStaticField(0x1E810);
		}
		static ::System::Func_3<::Class_1_06E38C65842C3B24*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__0____DetermineStateForOutOfEngagement()
		{
			return (::System::Func_3<::Class_1_06E38C65842C3B24*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTargetsViewModel___O_TypeDefinitionIndex)->GetStaticField(0x1E818);
		}
		static ::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__1____DetermineStateForEngagementMazeOrBattle()
		{
			return (::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTargetsViewModel___O_TypeDefinitionIndex)->GetStaticField(0x1E820);
		}
	};
}
