#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockBattleOperation___O_TypeDefinitionIndex = 21514;

	class LockBattleOperation___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleOperationType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleOperationType>**)Il2CppClass::FromTypeDefinitionIndex(LockBattleOperation___O_TypeDefinitionIndex)->GetStaticField(0x26970);
		}
	};
}
