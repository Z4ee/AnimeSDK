#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5EBDCA5E10FB9D5A;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC9FBA60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC9FBA50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_Factory_TypeDefinitionIndex = 80266;

	class ChallengeTierceMazeViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x10

		::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel* Create(::RPG::Client::ChallengeData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel*(*)(::PVOID, ::RPG::Client::ChallengeData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
