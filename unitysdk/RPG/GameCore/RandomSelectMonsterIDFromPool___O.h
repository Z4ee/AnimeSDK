#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectMonsterIDFromPool___O_TypeDefinitionIndex = 21512;

	class RandomSelectMonsterIDFromPool___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>**)Il2CppClass::FromTypeDefinitionIndex(RandomSelectMonsterIDFromPool___O_TypeDefinitionIndex)->GetStaticField(0x318A0);
		}
	};
}
