#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePreloadConfig___O_TypeDefinitionIndex = 14978;

	class BattlePreloadConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(BattlePreloadConfig___O_TypeDefinitionIndex)->GetStaticField(0x23020);
		}
	};
}
