#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_59BB61CDD388D438.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_13C92F794B1CBF6A_METHOD_3_F7AB89EC71D9B64B_OFFSET UNITYSDK_OFFSET(0xBC41460)
#define CLASS_3_13C92F794B1CBF6A__CTOR_OFFSET UNITYSDK_OFFSET(0xBC41350)

inline static constexpr unsigned int Class_3_13C92F794B1CBF6A_TypeDefinitionIndex = 58384;

class Class_3_13C92F794B1CBF6A : public ::Class_2_59BB61CDD388D438
{
public:
	::RPG::GameCore::NewAdventureFireProjectile* PBGHFKLFOHD; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_13C92F794B1CBF6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F7AB89EC71D9B64B(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_13C92F794B1CBF6A_METHOD_3_F7AB89EC71D9B64B_OFFSET))(this, a1, a2);
	}
};
