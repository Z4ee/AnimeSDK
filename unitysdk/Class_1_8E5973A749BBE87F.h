#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AITakenDamageSelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_8E5973A749BBE87F_METHOD_1_2DEBDB38A20ADC20_OFFSET UNITYSDK_OFFSET(0xD81C030)

inline static constexpr unsigned int Class_1_8E5973A749BBE87F_TypeDefinitionIndex = 54555;

class Class_1_8E5973A749BBE87F : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_2DEBDB38A20ADC20(::RPG::GameCore::AITakenDamageSelector* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::AITakenDamageSelector*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E5973A749BBE87F_METHOD_1_2DEBDB38A20ADC20_OFFSET))(a1, a2, a3);
	}
};
