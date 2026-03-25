#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_59BB61CDD388D438.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F5AF69FCD695F38B_METHOD_3_44E04FB4D62EB608_OFFSET UNITYSDK_OFFSET(0x8AE5A00)
#define CLASS_3_F5AF69FCD695F38B_METHOD_3_BEDE7D7E6A860CC8_OFFSET UNITYSDK_OFFSET(0x8AE5870)
#define CLASS_3_F5AF69FCD695F38B__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE5850)

inline static constexpr unsigned int Class_3_F5AF69FCD695F38B_TypeDefinitionIndex = 46975;

class Class_3_F5AF69FCD695F38B : public ::Class_2_59BB61CDD388D438
{
public:
	::RPG::GameCore::NewAdventureFireProjectile* Field_3_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_F5AF69FCD695F38B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BEDE7D7E6A860CC8(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_F5AF69FCD695F38B_METHOD_3_BEDE7D7E6A860CC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_44E04FB4D62EB608(::RPG::GameCore::GameEntity* P0, ::Class_1_2B8E0B4950FE44E7* P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_F5AF69FCD695F38B_METHOD_3_44E04FB4D62EB608_OFFSET))(this, P0, P1);
	}
};
