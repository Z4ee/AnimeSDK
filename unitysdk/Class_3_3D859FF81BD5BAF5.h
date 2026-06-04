#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D9346AE479F5CE87.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D859FF81BD5BAF5_METHOD_3_748E2125473CC277_OFFSET UNITYSDK_OFFSET(0xC964DE0)
#define CLASS_3_3D859FF81BD5BAF5_METHOD_3_E654F389D9E1BBFC_OFFSET UNITYSDK_OFFSET(0xC964EF0)
#define CLASS_3_3D859FF81BD5BAF5__CTOR_OFFSET UNITYSDK_OFFSET(0xC964DC0)

inline static constexpr unsigned int Class_3_3D859FF81BD5BAF5_TypeDefinitionIndex = 51591;

class Class_3_3D859FF81BD5BAF5 : public ::Class_2_D9346AE479F5CE87
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

	::System::Void Method_3_E654F389D9E1BBFC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_3D859FF81BD5BAF5_METHOD_3_E654F389D9E1BBFC_OFFSET))(this, a1, a2, a3);
	}
};
