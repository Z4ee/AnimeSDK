#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectJsonConfig___O_TypeDefinitionIndex = 15606;

	class EffectJsonConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(EffectJsonConfig___O_TypeDefinitionIndex)->GetStaticField(0x347A0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PPEffectFilterType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PPEffectFilterType>**)Il2CppClass::FromTypeDefinitionIndex(EffectJsonConfig___O_TypeDefinitionIndex)->GetStaticField(0x347A8);
		}
	};
}
