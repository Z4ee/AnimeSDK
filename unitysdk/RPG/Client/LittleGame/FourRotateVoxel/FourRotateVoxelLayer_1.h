#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerBase_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelLayer_1_TypeDefinitionIndex = 40604;

	template <typename T>
	class FourRotateVoxelLayer_1 : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<T>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<T>*>* LayerItems; // 0x0
	};
}
