#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationConfig___O_TypeDefinitionIndex = 15705;

	class CustomTeamFormationConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillType>** StaticGet__3___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillType>**)Il2CppClass::FromTypeDefinitionIndex(CustomTeamFormationConfig___O_TypeDefinitionIndex)->GetStaticField(0x31300);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeamFormationType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeamFormationType>**)Il2CppClass::FromTypeDefinitionIndex(CustomTeamFormationConfig___O_TypeDefinitionIndex)->GetStaticField(0x31308);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnState>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnState>**)Il2CppClass::FromTypeDefinitionIndex(CustomTeamFormationConfig___O_TypeDefinitionIndex)->GetStaticField(0x31310);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VCameraState>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VCameraState>**)Il2CppClass::FromTypeDefinitionIndex(CustomTeamFormationConfig___O_TypeDefinitionIndex)->GetStaticField(0x31318);
		}
	};
}
