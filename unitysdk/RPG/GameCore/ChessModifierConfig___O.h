#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ChessModifierEvent.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModifierConfig___O_TypeDefinitionIndex = 16190;

	class ChessModifierConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChessModifierBehaviorFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChessModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(ChessModifierConfig___O_TypeDefinitionIndex)->GetStaticField(0x26BB0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChessModifierEvent>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChessModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(ChessModifierConfig___O_TypeDefinitionIndex)->GetStaticField(0x26BB8);
		}
	};
}
