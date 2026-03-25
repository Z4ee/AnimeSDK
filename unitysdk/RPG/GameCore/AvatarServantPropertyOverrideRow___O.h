#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantPropertyOverrideRow___O_TypeDefinitionIndex = 11695;

	class AvatarServantPropertyOverrideRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttackType>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideRow___O_TypeDefinitionIndex)->GetStaticField(0x20830);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideRow___O_TypeDefinitionIndex)->GetStaticField(0x20838);
		}
	};
}
