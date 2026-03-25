#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_745;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }

#define CLASS_1_7B4C9188F4296EC4_METHOD_1_74808FC1DE5494C8_OFFSET UNITYSDK_OFFSET(0x11543340)
#define CLASS_1_7B4C9188F4296EC4_METHOD_1_B561E97041C60DFA_OFFSET UNITYSDK_OFFSET(0x11543920)
#define CLASS_1_7B4C9188F4296EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x11543B10)

inline static constexpr unsigned int Class_1_7B4C9188F4296EC4_TypeDefinitionIndex = 55057;

class Class_1_7B4C9188F4296EC4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefTeamRecomResult* Method_1_74808FC1DE5494C8(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_METHOD_1_74808FC1DE5494C8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B561E97041C60DFA(::Class_0_16E4307DCC419505_745* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_745*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_METHOD_1_B561E97041C60DFA_OFFSET))(this, a1, a2);
	}
};
