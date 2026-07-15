#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367B452FA4E5EC2C;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC6C990)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6C980)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_Factory_TypeDefinitionIndex = 76629;

	class ChallengeTierceMazeViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x10

		::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel* Create(::RPG::Client::ChallengeData* a1, ::Class_1_367B452FA4E5EC2C* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel*(*)(::PVOID, ::RPG::Client::ChallengeData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
