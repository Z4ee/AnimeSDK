#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_96263E1A4F8BD5D5;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_0EE6F2E90A486235_METHOD_1_7ECE055DECBDAEF2_OFFSET UNITYSDK_OFFSET(0x14A21460)
#define CLASS_1_0EE6F2E90A486235_METHOD_1_8152C003FE4E8F30_OFFSET UNITYSDK_OFFSET(0x14A21550)

inline static constexpr unsigned int Class_1_0EE6F2E90A486235_TypeDefinitionIndex = 53658;

class Class_1_0EE6F2E90A486235 : public ::System::Object
{
public:
	static ::Class_1_96263E1A4F8BD5D5* Method_1_7ECE055DECBDAEF2(::Class_1_7E61104234A02BD7* a1)
	{
		return ((::Class_1_96263E1A4F8BD5D5*(*)(::Class_1_7E61104234A02BD7*))((::PBYTE)hIl2Cpp + CLASS_1_0EE6F2E90A486235_METHOD_1_7ECE055DECBDAEF2_OFFSET))(a1);
	}

	static ::Class_1_7E61104234A02BD7* Method_1_8152C003FE4E8F30(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_7E61104234A02BD7*(*)(::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0EE6F2E90A486235_METHOD_1_8152C003FE4E8F30_OFFSET))(a1, a2);
	}
};
