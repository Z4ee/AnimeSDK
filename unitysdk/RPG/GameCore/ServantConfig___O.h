#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/RPG/GameCore/EHitDirectionType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantConfig___O_TypeDefinitionIndex = 15648;

	class ServantConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(ServantConfig___O_TypeDefinitionIndex)->GetStaticField(0x4CD30);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EFootIKMode>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EFootIKMode>**)Il2CppClass::FromTypeDefinitionIndex(ServantConfig___O_TypeDefinitionIndex)->GetStaticField(0x4CD38);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EHitDirectionType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EHitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ServantConfig___O_TypeDefinitionIndex)->GetStaticField(0x4CD40);
		}
	};
}
