#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DED4BA2FC834659B;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }

#define CLASS_1_4ADF969C4FEC4B00_METHOD_1_46FAA96DD2A3D7EA_OFFSET UNITYSDK_OFFSET(0x147107C0)
#define CLASS_1_4ADF969C4FEC4B00_METHOD_1_49117C2AC805BF90_OFFSET UNITYSDK_OFFSET(0x14710620)
#define CLASS_1_4ADF969C4FEC4B00_METHOD_1_D9F55BF3841906DE_OFFSET UNITYSDK_OFFSET(0x14710750)

inline static constexpr unsigned int Class_1_4ADF969C4FEC4B00_TypeDefinitionIndex = 71942;

class Class_1_4ADF969C4FEC4B00 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_49117C2AC805BF90(::RPG::GameCore::HipplenIncidentOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_4ADF969C4FEC4B00_METHOD_1_49117C2AC805BF90_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_D9F55BF3841906DE(::RPG::GameCore::HipplenIncidentCommitOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentCommitOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_4ADF969C4FEC4B00_METHOD_1_D9F55BF3841906DE_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_46FAA96DD2A3D7EA(::RPG::GameCore::HipplenIncidentRandomOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentRandomOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_4ADF969C4FEC4B00_METHOD_1_46FAA96DD2A3D7EA_OFFSET))(a1, a2);
	}
};
