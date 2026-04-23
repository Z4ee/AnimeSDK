#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameConfig___O_TypeDefinitionIndex = 17490;

	class CakeRaceGameConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePickupItemType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePickupItemType>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameConfig___O_TypeDefinitionIndex)->GetStaticField(0x26600);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellType>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameConfig___O_TypeDefinitionIndex)->GetStaticField(0x26608);
		}
	};
}
