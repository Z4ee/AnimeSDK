#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/RaidRecoverType.h"
#include "unitysdk/RPG/GameCore/RaidTagType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow___O_TypeDefinitionIndex = 13795;

	class RaidConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x3EB10);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RaidRecoverType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RaidRecoverType>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x3EB18);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RaidTagType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RaidTagType>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x3EB20);
		}
	};
}
