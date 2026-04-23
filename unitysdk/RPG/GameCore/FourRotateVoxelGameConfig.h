#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelUIConfig; }
namespace RPG::GameCore { class FourRotateVoxelMoveConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevertConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_METHOD_3_84E7B140950F136B_OFFSET UNITYSDK_OFFSET(0x1892E040)
#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_METHOD_3_9472D1D16958D546_OFFSET UNITYSDK_OFFSET(0x1892E080)
#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1892E070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGameConfig_TypeDefinitionIndex = 15866;

	class FourRotateVoxelGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::FourRotateVoxelPlayerConfig* PlayerConfig; // 0x10
		::RPG::GameCore::FourRotateVoxelCameraConfig* CameraConfig; // 0x18
		::RPG::GameCore::FourRotateVoxelRevertConfig* RevertConfig; // 0x20
		::RPG::GameCore::FourRotateVoxelMoveConfig* MoveConfig; // 0x28
		::RPG::GameCore::FourRotateVoxelLevelConfig* LevelConfig; // 0x30
		::RPG::GameCore::FourRotateVoxelLevelUIConfig* LevelUIConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84E7B140950F136B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_METHOD_3_84E7B140950F136B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9472D1D16958D546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_METHOD_3_9472D1D16958D546_OFFSET))(a1, a2);
		}
	};
}
