#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_9869F38A47970354;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_77EFC0F2C87FDAA5_METHOD_1_5040259A716D4B8A_OFFSET UNITYSDK_OFFSET(0x9A39D90)
#define CLASS_1_77EFC0F2C87FDAA5_METHOD_1_A70784E011AF5C0D_OFFSET UNITYSDK_OFFSET(0x9A39C80)

inline static constexpr unsigned int Class_1_77EFC0F2C87FDAA5_TypeDefinitionIndex = 51780;

class Class_1_77EFC0F2C87FDAA5 : public ::System::Object
{
public:
	static ::Class_1_9869F38A47970354* Method_1_A70784E011AF5C0D(::Class_1_7E61104234A02BD7* a1)
	{
		return ((::Class_1_9869F38A47970354*(*)(::Class_1_7E61104234A02BD7*))((::PBYTE)hIl2Cpp + CLASS_1_77EFC0F2C87FDAA5_METHOD_1_A70784E011AF5C0D_OFFSET))(a1);
	}

	static ::Class_1_7E61104234A02BD7* Method_1_5040259A716D4B8A(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_7E61104234A02BD7*(*)(::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_77EFC0F2C87FDAA5_METHOD_1_5040259A716D4B8A_OFFSET))(a1, a2);
	}
};
