#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/System/Object.h"

class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayerBase_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4532365BD3F1290__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF73F0)

inline static constexpr unsigned int Class_1_F4532365BD3F1290_TypeDefinitionIndex = 39790;

class Class_1_F4532365BD3F1290 : public ::System::Object
{
public:
	::Class_2_B8E38BF47138A2E5* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<::Class_2_1A8148841049062A*>*>* Field_1_2; // 0x20
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_3; // 0x28
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_6; // 0x45
	::System::Boolean Field_1_7; // 0x46
	::System::Boolean Field_1_8; // 0x47
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_9; // 0x48
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType Field_1_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4532365BD3F1290__CTOR_OFFSET))(this);
	}
};
