#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AITakenDamageSelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_62FA071CE54D2377_METHOD_1_FF7A2AA1E72C0C20_OFFSET UNITYSDK_OFFSET(0x9094B00)

inline static constexpr unsigned int Class_1_62FA071CE54D2377_TypeDefinitionIndex = 50122;

class Class_1_62FA071CE54D2377 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_FF7A2AA1E72C0C20(::RPG::GameCore::AITakenDamageSelector* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::AITakenDamageSelector*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62FA071CE54D2377_METHOD_1_FF7A2AA1E72C0C20_OFFSET))(a1, a2, a3);
	}
};
