#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFailureTipsConfigRow___O_TypeDefinitionIndex = 11748;

	class BattleFailureTipsConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(BattleFailureTipsConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x22B40);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(BattleFailureTipsConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x22B48);
		}
	};
}
