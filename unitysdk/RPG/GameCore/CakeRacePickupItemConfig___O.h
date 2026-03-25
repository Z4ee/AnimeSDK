#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePickupItemConfig___O_TypeDefinitionIndex = 16922;

	class CakeRacePickupItemConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellType>**)Il2CppClass::FromTypeDefinitionIndex(CakeRacePickupItemConfig___O_TypeDefinitionIndex)->GetStaticField(0x257A0);
		}
	};
}
