#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/AudioGameState.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/UIAudioStage.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioConfig___O_TypeDefinitionIndex = 15498;

	class AudioConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCharacterVOType>** StaticGet__3___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCharacterVOType>**)Il2CppClass::FromTypeDefinitionIndex(AudioConfig___O_TypeDefinitionIndex)->GetStaticField(0x26810);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterVOType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterVOType>**)Il2CppClass::FromTypeDefinitionIndex(AudioConfig___O_TypeDefinitionIndex)->GetStaticField(0x26818);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AudioGameState>** StaticGet__4___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AudioGameState>**)Il2CppClass::FromTypeDefinitionIndex(AudioConfig___O_TypeDefinitionIndex)->GetStaticField(0x26820);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIAudioStage>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIAudioStage>**)Il2CppClass::FromTypeDefinitionIndex(AudioConfig___O_TypeDefinitionIndex)->GetStaticField(0x26828);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlaneType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlaneType>**)Il2CppClass::FromTypeDefinitionIndex(AudioConfig___O_TypeDefinitionIndex)->GetStaticField(0x26830);
		}
	};
}
