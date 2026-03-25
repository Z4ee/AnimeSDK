#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeConfig___O_TypeDefinitionIndex = 16215;

	class MazeConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierBehaviorFlag>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(MazeConfig___O_TypeDefinitionIndex)->GetStaticField(0x28FD0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(MazeConfig___O_TypeDefinitionIndex)->GetStaticField(0x28FD8);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropType>**)Il2CppClass::FromTypeDefinitionIndex(MazeConfig___O_TypeDefinitionIndex)->GetStaticField(0x28FE0);
		}
	};
}
