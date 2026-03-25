#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreUISetting___O_TypeDefinitionIndex = 15710;

	class GameCoreUISetting___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreUISetting___O_TypeDefinitionIndex)->GetStaticField(0x1FE40);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreUISetting___O_TypeDefinitionIndex)->GetStaticField(0x1FE48);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusType>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreUISetting___O_TypeDefinitionIndex)->GetStaticField(0x1FE50);
		}
	};
}
