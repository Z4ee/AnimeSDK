#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367B452FA4E5EC2C;
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }

#define CLASS_1_32F9965DD6B01539_METHOD_1_113AD3587F71BEBC_OFFSET UNITYSDK_OFFSET(0x15218AB0)
#define CLASS_1_32F9965DD6B01539_METHOD_1_4255F536117992DC_OFFSET UNITYSDK_OFFSET(0x15218800)
#define CLASS_1_32F9965DD6B01539_METHOD_1_D92F2841926D5425_OFFSET UNITYSDK_OFFSET(0x15218D20)
#define CLASS_1_32F9965DD6B01539_METHOD_1_DBC9BB92C34F68B0_OFFSET UNITYSDK_OFFSET(0x15218A30)

inline static constexpr unsigned int Class_1_32F9965DD6B01539_TypeDefinitionIndex = 76632;

class Class_1_32F9965DD6B01539 : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_4255F536117992DC(::Class_1_367B452FA4E5EC2C* a1)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_32F9965DD6B01539_METHOD_1_4255F536117992DC_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_DBC9BB92C34F68B0(::RPG::Client::ChallengeData* a1)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_32F9965DD6B01539_METHOD_1_DBC9BB92C34F68B0_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_113AD3587F71BEBC(::RPG::Client::ChallengeData* a1, ::Class_1_367B452FA4E5EC2C* a2)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_32F9965DD6B01539_METHOD_1_113AD3587F71BEBC_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_D92F2841926D5425(::RPG::Client::ChallengeBossData* a1, ::Class_1_367B452FA4E5EC2C* a2)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeBossData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_32F9965DD6B01539_METHOD_1_D92F2841926D5425_OFFSET))(a1, a2);
	}
};
