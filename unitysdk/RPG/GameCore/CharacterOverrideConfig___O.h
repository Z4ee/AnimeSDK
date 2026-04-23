#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/RPG/GameCore/EHitDirectionType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig___O_TypeDefinitionIndex = 15638;

	class CharacterOverrideConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EFootIKMode>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EFootIKMode>**)Il2CppClass::FromTypeDefinitionIndex(CharacterOverrideConfig___O_TypeDefinitionIndex)->GetStaticField(0x28CA0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EHitDirectionType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EHitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(CharacterOverrideConfig___O_TypeDefinitionIndex)->GetStaticField(0x28CA8);
		}
	};
}
