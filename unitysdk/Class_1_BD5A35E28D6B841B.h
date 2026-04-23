#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_421;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_BD5A35E28D6B841B_METHOD_1_C86CCB26FA3C81BA_OFFSET UNITYSDK_OFFSET(0x111AAAA0)
#define CLASS_1_BD5A35E28D6B841B_METHOD_1_E2F34D962DE8754E_OFFSET UNITYSDK_OFFSET(0x111AA840)

inline static constexpr unsigned int Class_1_BD5A35E28D6B841B_TypeDefinitionIndex = 49761;

class Class_1_BD5A35E28D6B841B : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_E2F34D962DE8754E(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixVec3 a3, ::System::UInt32 a4, ::Class_0_16E4307DCC419505_397* a5, ::Class_0_16E4307DCC419505_420* a6, ::Class_0_16E4307DCC419505_421* a7, ::RPG::GameCore::FixPoint a8, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a9, ::System::String* a10)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixVec3, ::System::UInt32, ::Class_0_16E4307DCC419505_397*, ::Class_0_16E4307DCC419505_420*, ::Class_0_16E4307DCC419505_421*, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD5A35E28D6B841B_METHOD_1_E2F34D962DE8754E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Class_0_16E4307DCC419505_397* Method_1_C86CCB26FA3C81BA(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtCollision2DShapeConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BD5A35E28D6B841B_METHOD_1_C86CCB26FA3C81BA_OFFSET))(a1, a2, a3);
	}
};
