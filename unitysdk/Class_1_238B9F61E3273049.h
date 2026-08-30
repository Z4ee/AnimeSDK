#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_96263E1A4F8BD5D5;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_238B9F61E3273049_METHOD_1_7DF38A2E2D5F8A7B_OFFSET UNITYSDK_OFFSET(0x162DA260)
#define CLASS_1_238B9F61E3273049_METHOD_1_7EC584D43D7F42F9_OFFSET UNITYSDK_OFFSET(0x162DA380)

inline static constexpr unsigned int Class_1_238B9F61E3273049_TypeDefinitionIndex = 56377;

class Class_1_238B9F61E3273049 : public ::System::Object
{
public:
	static ::Class_1_96263E1A4F8BD5D5* Method_1_7DF38A2E2D5F8A7B(::Class_1_7E61104234A02BD7* a1)
	{
		return ((::Class_1_96263E1A4F8BD5D5*(*)(::Class_1_7E61104234A02BD7*))((::PBYTE)hIl2Cpp + CLASS_1_238B9F61E3273049_METHOD_1_7DF38A2E2D5F8A7B_OFFSET))(a1);
	}

	static ::Class_1_7E61104234A02BD7* Method_1_7EC584D43D7F42F9(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_7E61104234A02BD7*(*)(::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_238B9F61E3273049_METHOD_1_7EC584D43D7F42F9_OFFSET))(a1, a2);
	}
};
