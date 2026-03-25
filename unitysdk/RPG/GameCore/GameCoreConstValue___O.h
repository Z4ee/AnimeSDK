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
	inline static constexpr unsigned int GameCoreConstValue___O_TypeDefinitionIndex = 15683;

	class GameCoreConstValue___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet__3___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FBF0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet__7___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FBF8);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC00);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__4___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC08);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC10);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>** StaticGet__6___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterRank>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC18);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>** StaticGet__5___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC20);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConstValue___O_TypeDefinitionIndex)->GetStaticField(0x1FC28);
		}
	};
}
