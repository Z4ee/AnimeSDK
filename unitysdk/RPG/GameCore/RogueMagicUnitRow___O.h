#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitRow___O_TypeDefinitionIndex = 14089;

	class RogueMagicUnitRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicEffectType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicEffectType>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicUnitRow___O_TypeDefinitionIndex)->GetStaticField(0x44B50);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicRangeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueMagicRangeType>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicUnitRow___O_TypeDefinitionIndex)->GetStaticField(0x44B58);
		}
	};
}
