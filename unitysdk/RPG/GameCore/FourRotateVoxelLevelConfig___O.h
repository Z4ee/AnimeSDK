#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelConfig___O_TypeDefinitionIndex = 15862;

	class FourRotateVoxelLevelConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelAnimalType>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelAnimalType>**)Il2CppClass::FromTypeDefinitionIndex(FourRotateVoxelLevelConfig___O_TypeDefinitionIndex)->GetStaticField(0x33350);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelGameModeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelGameModeType>**)Il2CppClass::FromTypeDefinitionIndex(FourRotateVoxelLevelConfig___O_TypeDefinitionIndex)->GetStaticField(0x33358);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelEnvType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelEnvType>**)Il2CppClass::FromTypeDefinitionIndex(FourRotateVoxelLevelConfig___O_TypeDefinitionIndex)->GetStaticField(0x33360);
		}
	};
}
