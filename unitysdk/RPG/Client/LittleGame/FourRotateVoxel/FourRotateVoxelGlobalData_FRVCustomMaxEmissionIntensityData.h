#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA_FRVCUSTOMMAXEMISSIONINTENSITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C9850)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGlobalData_FRVCustomMaxEmissionIntensityData_TypeDefinitionIndex = 76379;

	class FourRotateVoxelGlobalData_FRVCustomMaxEmissionIntensityData : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelAnimalType AnimalType; // 0x10
		::System::Single MaxEmissionIntensity; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA_FRVCUSTOMMAXEMISSIONINTENSITYDATA__CTOR_OFFSET))(this);
		}
	};
}
