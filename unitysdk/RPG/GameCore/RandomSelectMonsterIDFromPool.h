#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_METHOD_3_5A78B415498A87B5_OFFSET UNITYSDK_OFFSET(0x17580A10)
#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_METHOD_3_F52BE6704689EEB6_OFFSET UNITYSDK_OFFSET(0x17580990)
#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x175809E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectMonsterIDFromPool_TypeDefinitionIndex = 21511;

	class RandomSelectMonsterIDFromPool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RandomPoolID; // 0x18
		::Il2CppArray<::RPG::GameCore::MonsterRank>* PoolFilter; // 0x20
		::System::String* MonsterIDKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F52BE6704689EEB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_METHOD_3_F52BE6704689EEB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A78B415498A87B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_METHOD_3_5A78B415498A87B5_OFFSET))(a1, a2);
		}
	};
}
