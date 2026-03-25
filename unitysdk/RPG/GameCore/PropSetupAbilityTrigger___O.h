#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupAbilityTrigger___O_TypeDefinitionIndex = 18644;

	class PropSetupAbilityTrigger___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(PropSetupAbilityTrigger___O_TypeDefinitionIndex)->GetStaticField(0x31470);
		}
	};
}
