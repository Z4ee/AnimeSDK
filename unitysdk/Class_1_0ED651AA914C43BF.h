#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_896;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }

#define CLASS_1_0ED651AA914C43BF_METHOD_1_4F178026762621CB_OFFSET UNITYSDK_OFFSET(0xBF50B40)
#define CLASS_1_0ED651AA914C43BF_METHOD_1_D5265864FD44CD02_OFFSET UNITYSDK_OFFSET(0xBF51160)
#define CLASS_1_0ED651AA914C43BF__CTOR_OFFSET UNITYSDK_OFFSET(0xBF51370)

inline static constexpr unsigned int Class_1_0ED651AA914C43BF_TypeDefinitionIndex = 63178;

class Class_1_0ED651AA914C43BF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefTeamRecomResult* Method_1_4F178026762621CB(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_METHOD_1_4F178026762621CB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5265864FD44CD02(::Class_0_16E4307DCC419505_896* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_896*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_METHOD_1_D5265864FD44CD02_OFFSET))(this, a1, a2);
	}
};
