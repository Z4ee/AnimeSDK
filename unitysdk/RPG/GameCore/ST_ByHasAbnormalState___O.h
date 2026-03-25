#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAbnormalState___O_TypeDefinitionIndex = 18360;

	class ST_ByHasAbnormalState___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCharacterUnitState>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCharacterUnitState>**)Il2CppClass::FromTypeDefinitionIndex(ST_ByHasAbnormalState___O_TypeDefinitionIndex)->GetStaticField(0x6D50);
		}
	};
}
