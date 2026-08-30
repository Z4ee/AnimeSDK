#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int SceneQueryCache_1_TypeDefinitionIndex = 41539;

	template <typename T>
	class SceneQueryCache_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<T>*>** StaticGet__CoordListPool()
		{
			return (::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneQueryCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<T>*>*>* YZCache; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<T>*>*>* XYCache; // 0x0
	};
}
