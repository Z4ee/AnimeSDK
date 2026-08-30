#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8E8C7C5B6729CCDF.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8C79C496B8CAC90_METHOD_3_CAB36CA1D653736E_OFFSET UNITYSDK_OFFSET(0xE047AA0)
#define CLASS_3_E8C79C496B8CAC90__CTOR_OFFSET UNITYSDK_OFFSET(0xE047A80)

inline static constexpr unsigned int Class_3_E8C79C496B8CAC90_TypeDefinitionIndex = 55433;

class Class_3_E8C79C496B8CAC90 : public ::Class_2_8E8C7C5B6729CCDF
{
public:
	::RPG::GameCore::NewFireProjectile* PBGHFKLFOHD; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_E8C79C496B8CAC90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CAB36CA1D653736E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_E8C79C496B8CAC90_METHOD_3_CAB36CA1D653736E_OFFSET))(this, a1, a2, a3);
	}
};
