#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameView.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6CB310)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CB3E0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxel2DBrickGameView_TypeDefinitionIndex = 70558;

	class FourRotateVoxel2DBrickGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_AWAKE_OFFSET))(this);
		}
	};
}
