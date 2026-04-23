#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow___O_TypeDefinitionIndex = 10459;

	class AetherDivideSpiritRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AetherPassiveSkillType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AetherPassiveSkillType>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritRow___O_TypeDefinitionIndex)->GetStaticField(0x24FC0);
		}
	};
}
