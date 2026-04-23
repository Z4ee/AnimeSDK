#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelLevelCustomCameraParameterConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelTargetProgressConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_METHOD_3_20045C5A9C26E043_OFFSET UNITYSDK_OFFSET(0x1892F500)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_METHOD_3_6D1906CEE8279282_OFFSET UNITYSDK_OFFSET(0x1892F4C0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1892F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelSettings_TypeDefinitionIndex = 15869;

	class FourRotateVoxelLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::RPG::GameCore::HoyoTagContainer* Tags; // 0x10
		::RPG::GameCore::FourRotateVoxelGameModeType GameModeType; // 0x18
		::RPG::GameCore::FourRotateVoxelEnvType EnvType; // 0x1C
		::RPG::GameCore::FourRotateVoxelAnimalType AnimalType; // 0x20
		::System::Boolean IsNeedPedestal; // 0x24
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*>* TargetProgressConfigs; // 0x28
		::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig* CustomCameraParameterConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D1906CEE8279282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_METHOD_3_6D1906CEE8279282_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20045C5A9C26E043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_METHOD_3_20045C5A9C26E043_OFFSET))(a1, a2);
		}
	};
}
