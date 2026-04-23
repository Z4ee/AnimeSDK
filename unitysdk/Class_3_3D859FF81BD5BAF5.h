#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_96489F62C0AE1C3F.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D859FF81BD5BAF5_METHOD_3_748E2125473CC277_OFFSET UNITYSDK_OFFSET(0xC71B290)
#define CLASS_3_3D859FF81BD5BAF5_METHOD_3_B4B00C2D0B69C744_OFFSET UNITYSDK_OFFSET(0xC71B390)
#define CLASS_3_3D859FF81BD5BAF5__CTOR_OFFSET UNITYSDK_OFFSET(0xC71B270)

inline static constexpr unsigned int Class_3_3D859FF81BD5BAF5_TypeDefinitionIndex = 50921;

class Class_3_3D859FF81BD5BAF5 : public ::Class_2_96489F62C0AE1C3F
{
public:
	::RPG::GameCore::NewFireProjectile* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_3D859FF81BD5BAF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_748E2125473CC277(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_3D859FF81BD5BAF5_METHOD_3_748E2125473CC277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B4B00C2D0B69C744(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::GameEntity* P1, ::Class_1_2B8E0B4950FE44E7* P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_3D859FF81BD5BAF5_METHOD_3_B4B00C2D0B69C744_OFFSET))(this, P0, P1, P2);
	}
};
