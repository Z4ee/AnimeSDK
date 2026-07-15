#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameView.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW_COLLECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x19AA56A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW_ROTATEY_OFFSET UNITYSDK_OFFSET(0x19AA5AA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA4D90)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW__REFRESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x19AA54B0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelStructGameView_TypeDefinitionIndex = 72909;

	class FourRotateVoxelStructGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* SubObjects; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* SubObjectCoords; // 0xB0
		::System::Boolean Is2D; // 0xB8
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* AttachActive3DStruct; // 0xC0
		::UnityEngine::Vector3 InitialPosition; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshDataInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW__REFRESHDATAINTERNAL_OFFSET))(this);
		}

		::System::Void CollectChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW_COLLECTCHILDREN_OFFSET))(this);
		}

		::System::Void RotateY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSTRUCTGAMEVIEW_ROTATEY_OFFSET))(this, a1);
		}
	};
}
