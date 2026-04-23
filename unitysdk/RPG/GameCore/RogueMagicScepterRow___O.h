#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterRow___O_TypeDefinitionIndex = 14084;

	class RogueMagicScepterRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicMountType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicMountType>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterRow___O_TypeDefinitionIndex)->GetStaticField(0x448C0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicEffectType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicEffectType>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterRow___O_TypeDefinitionIndex)->GetStaticField(0x448C8);
		}
	};
}
