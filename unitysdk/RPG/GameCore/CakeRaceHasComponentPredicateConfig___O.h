#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceComponentType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHasComponentPredicateConfig___O_TypeDefinitionIndex = 17469;

	class CakeRaceHasComponentPredicateConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceComponentType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceComponentType>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceHasComponentPredicateConfig___O_TypeDefinitionIndex)->GetStaticField(0x26710);
		}
	};
}
