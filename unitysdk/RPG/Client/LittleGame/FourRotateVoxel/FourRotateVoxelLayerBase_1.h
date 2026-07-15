#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class SceneQueryCache_1; }

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelLayerBase_1_TypeDefinitionIndex = 40603;

	template <typename T>
	class FourRotateVoxelLayerBase_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::SceneQueryCache_1<T>* QueryCache; // 0x0
	};
}
