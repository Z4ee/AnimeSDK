#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionDataRow___O_TypeDefinitionIndex = 12101;

	class ExpeditionDataRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarBaseType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarBaseType>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataRow___O_TypeDefinitionIndex)->GetStaticField(0x2CF50);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataRow___O_TypeDefinitionIndex)->GetStaticField(0x2CF58);
		}
	};
}
