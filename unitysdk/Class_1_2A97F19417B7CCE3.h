#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AITakenDamageSelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_2A97F19417B7CCE3_METHOD_1_A4572FF6B7DB87DF_OFFSET UNITYSDK_OFFSET(0xC1EEB00)

inline static constexpr unsigned int Class_1_2A97F19417B7CCE3_TypeDefinitionIndex = 50789;

class Class_1_2A97F19417B7CCE3 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_A4572FF6B7DB87DF(::RPG::GameCore::AITakenDamageSelector* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::AITakenDamageSelector*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A97F19417B7CCE3_METHOD_1_A4572FF6B7DB87DF_OFFSET))(a1, a2, a3);
	}
};
