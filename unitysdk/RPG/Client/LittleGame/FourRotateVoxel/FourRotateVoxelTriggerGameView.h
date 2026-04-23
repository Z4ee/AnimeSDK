#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameView.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELTRIGGERGAMEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6D8230)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELTRIGGERGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D8310)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelTriggerGameView_TypeDefinitionIndex = 70568;

	class FourRotateVoxelTriggerGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELTRIGGERGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELTRIGGERGAMEVIEW_AWAKE_OFFSET))(this);
		}
	};
}
