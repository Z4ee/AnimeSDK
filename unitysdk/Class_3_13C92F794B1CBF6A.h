#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DBDA6AC740B5D6A9.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_13C92F794B1CBF6A_METHOD_3_BEDE7D7E6A860CC8_OFFSET UNITYSDK_OFFSET(0xA8C0330)
#define CLASS_3_13C92F794B1CBF6A_METHOD_3_CDD99DE35EB488B4_OFFSET UNITYSDK_OFFSET(0xA8C04E0)
#define CLASS_3_13C92F794B1CBF6A__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C0220)

inline static constexpr unsigned int Class_3_13C92F794B1CBF6A_TypeDefinitionIndex = 54430;

class Class_3_13C92F794B1CBF6A : public ::Class_2_DBDA6AC740B5D6A9
{
public:
	::RPG::GameCore::NewAdventureFireProjectile* Field_3_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_13C92F794B1CBF6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BEDE7D7E6A860CC8(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_13C92F794B1CBF6A_METHOD_3_BEDE7D7E6A860CC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CDD99DE35EB488B4(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_13C92F794B1CBF6A_METHOD_3_CDD99DE35EB488B4_OFFSET))(this, a1, a2);
	}
};
