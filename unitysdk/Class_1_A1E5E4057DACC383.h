#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A1E5E4057DACC383_METHOD_1_3736360813ED5ED6_OFFSET UNITYSDK_OFFSET(0x15E004C0)
#define CLASS_1_A1E5E4057DACC383_METHOD_1_8A936A525AD4579F_1_OFFSET UNITYSDK_OFFSET(0x15E00470)
#define CLASS_1_A1E5E4057DACC383_METHOD_1_8A936A525AD4579F_OFFSET UNITYSDK_OFFSET(0x15E00420)

inline static constexpr unsigned int Class_1_A1E5E4057DACC383_TypeDefinitionIndex = 74993;

class Class_1_A1E5E4057DACC383 : public ::System::Object
{
public:
	static ::RPG::GameCore::ChallengeGroupType Method_1_8A936A525AD4579F(::RPG::GameCore::BadgePlayType a1)
	{
		return ((::RPG::GameCore::ChallengeGroupType(*)(::RPG::GameCore::BadgePlayType))((::PBYTE)hIl2Cpp + CLASS_1_A1E5E4057DACC383_METHOD_1_8A936A525AD4579F_OFFSET))(a1);
	}

	static ::RPG::GameCore::BadgePlayType Method_1_8A936A525AD4579F_1(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::RPG::GameCore::BadgePlayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_A1E5E4057DACC383_METHOD_1_8A936A525AD4579F_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::BadgeLevel Method_1_3736360813ED5ED6(::RPG::Client::ChallengePeakRank a1)
	{
		return ((::RPG::GameCore::BadgeLevel(*)(::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + CLASS_1_A1E5E4057DACC383_METHOD_1_3736360813ED5ED6_OFFSET))(a1);
	}
};
