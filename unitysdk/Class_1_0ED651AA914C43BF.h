#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1089;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }

#define CLASS_1_0ED651AA914C43BF_METHOD_1_164A73B86ED27848_OFFSET UNITYSDK_OFFSET(0xEB7A0C0)
#define CLASS_1_0ED651AA914C43BF_METHOD_1_D5265864FD44CD02_OFFSET UNITYSDK_OFFSET(0xEB7A7F0)
#define CLASS_1_0ED651AA914C43BF__CTOR_OFFSET UNITYSDK_OFFSET(0xEB7AA60)

inline static constexpr unsigned int Class_1_0ED651AA914C43BF_TypeDefinitionIndex = 67543;

class Class_1_0ED651AA914C43BF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefTeamRecomResult* Method_1_164A73B86ED27848(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_METHOD_1_164A73B86ED27848_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5265864FD44CD02(::Class_0_16E4307DCC419505_1089* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1089*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_METHOD_1_D5265864FD44CD02_OFFSET))(this, a1, a2);
	}
};
