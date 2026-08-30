#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelFloorMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD517240)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS82_0__GETLEVELUICONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xD517600)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelUIViewContext___c__DisplayClass82_0_TypeDefinitionIndex = 76356;

	class FourRotateVoxelUIViewContext___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig* floorMapInfoConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMapInfoConfig* _GetLevelUIConfig_b__0(::RPG::GameCore::FourRotateVoxelMapInfoConfig* a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMapInfoConfig*(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelMapInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELUIVIEWCONTEXT___C__DISPLAYCLASS82_0__GETLEVELUICONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
