#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelFloorMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D8C40)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS66_0__GETLEVELUICONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xA6D8FA0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelUIViewContext___c__DisplayClass66_0_TypeDefinitionIndex = 70541;

	class FourRotateVoxelUIViewContext___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig* floorMapInfoConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMapInfoConfig* _GetLevelUIConfig_b__0(::RPG::GameCore::FourRotateVoxelMapInfoConfig* config)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMapInfoConfig*(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelMapInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS66_0__GETLEVELUICONFIG_B__0_OFFSET))(this, config);
		}
	};
}
