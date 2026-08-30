#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelStructGameView.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B1BCD10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BCD60)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelAutoRotateStructGameView_TypeDefinitionIndex = 76374;

	class FourRotateVoxelAutoRotateStructGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView
	{
	public:
		::System::Boolean IsClockwiseRotate; // 0xF8
		::UnityEngine::Vector2 RotateRandomInterval; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
