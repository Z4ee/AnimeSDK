#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
class Class_0_16E4307DCC419505_439;
class Class_0_16E4307DCC419505_440;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_BD5A35E28D6B841B_METHOD_1_E2F34D962DE8754E_OFFSET UNITYSDK_OFFSET(0x13ADB3D0)
#define CLASS_1_BD5A35E28D6B841B_METHOD_1_FD42B1F47F108A57_OFFSET UNITYSDK_OFFSET(0x13ADB630)

inline static constexpr unsigned int Class_1_BD5A35E28D6B841B_TypeDefinitionIndex = 50428;

class Class_1_BD5A35E28D6B841B : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_E2F34D962DE8754E(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixVec3 a3, ::System::UInt32 a4, ::Class_0_16E4307DCC419505_416* a5, ::Class_0_16E4307DCC419505_439* a6, ::Class_0_16E4307DCC419505_440* a7, ::RPG::GameCore::FixPoint a8, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a9, ::System::String* a10)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixVec3, ::System::UInt32, ::Class_0_16E4307DCC419505_416*, ::Class_0_16E4307DCC419505_439*, ::Class_0_16E4307DCC419505_440*, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD5A35E28D6B841B_METHOD_1_E2F34D962DE8754E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Class_0_16E4307DCC419505_416* Method_1_FD42B1F47F108A57(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_0_16E4307DCC419505_416*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtCollision2DShapeConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BD5A35E28D6B841B_METHOD_1_FD42B1F47F108A57_OFFSET))(a1, a2, a3);
	}
};
