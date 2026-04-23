#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConstValue___O_TypeDefinitionIndex = 16209;

	class GameCoreConstValue___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D10);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D18);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__4___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D20);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D28);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>** StaticGet__5___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D30);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>** StaticGet__6___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D38);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet__3___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D40);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet__7___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x33D48);
		}
	};
}
