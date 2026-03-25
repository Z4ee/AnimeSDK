#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterConfig___O_TypeDefinitionIndex = 16014;

	class AdventureCharacterConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierBehaviorFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(AdventureCharacterConfig___O_TypeDefinitionIndex)->GetStaticField(0x1E730);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityTag>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(AdventureCharacterConfig___O_TypeDefinitionIndex)->GetStaticField(0x1E738);
		}
	};
}
