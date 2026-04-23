#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuffBinding___O_TypeDefinitionIndex = 22385;

	class AddMazeBuffBinding___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuffInBattleBindingType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuffInBattleBindingType>**)Il2CppClass::FromTypeDefinitionIndex(AddMazeBuffBinding___O_TypeDefinitionIndex)->GetStaticField(0x6B20);
		}
	};
}
