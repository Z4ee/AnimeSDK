#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DED4BA2FC834659B;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }

#define CLASS_1_53AEDB4C9733D0F6_METHOD_1_3E1FBB8707D5F2BB_OFFSET UNITYSDK_OFFSET(0x1119D7B0)
#define CLASS_1_53AEDB4C9733D0F6_METHOD_1_7D8CD760D4B1B336_OFFSET UNITYSDK_OFFSET(0x1119D620)
#define CLASS_1_53AEDB4C9733D0F6_METHOD_1_D9F55BF3841906DE_OFFSET UNITYSDK_OFFSET(0x1119D740)

inline static constexpr unsigned int Class_1_53AEDB4C9733D0F6_TypeDefinitionIndex = 69607;

class Class_1_53AEDB4C9733D0F6 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_7D8CD760D4B1B336(::RPG::GameCore::HipplenIncidentOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_53AEDB4C9733D0F6_METHOD_1_7D8CD760D4B1B336_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_D9F55BF3841906DE(::RPG::GameCore::HipplenIncidentCommitOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentCommitOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_53AEDB4C9733D0F6_METHOD_1_D9F55BF3841906DE_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_1_3E1FBB8707D5F2BB(::RPG::GameCore::HipplenIncidentRandomOptionConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentRandomOptionConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_53AEDB4C9733D0F6_METHOD_1_3E1FBB8707D5F2BB_OFFSET))(a1, a2);
	}
};
