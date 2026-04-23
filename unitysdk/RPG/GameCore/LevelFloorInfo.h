#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/RPG/GameCore/MapCameraType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomDataConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelDimensionInfo; }
namespace RPG::GameCore { class LevelGroupInstanceInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELFLOORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A42400)
#define RPG_GAMECORE_LEVELFLOORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A42C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorInfo_TypeDefinitionIndex = 16464;

	class LevelFloorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::String* FloorName; // 0x18
		::System::UInt32 StartGroupID; // 0x20
		::System::UInt32 StartAnchorID; // 0x24
		::Il2CppArray<::RPG::GameCore::LevelGroupInstanceInfo*>* GroupList; // 0x28
		::System::String* DefaultEnviroProfile; // 0x30
		::System::String* StageData; // 0x38
		::RPG::GameCore::MapCameraType CameraType; // 0x40
		::Il2CppArray<::System::Int32>* LayerToAreaMask; // 0x48
		::RPG::GameCore::FloorCustomDataConfig* FloorCustomData; // 0x50
		::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* BattleAreaList; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelDimensionInfo*>* DimensionList; // 0x60
		::System::String* CameraPrefabPath; // 0x68
		::Il2CppArray<::RPG::GameCore::LevelFeatureType>* LevelFeatureModules; // 0x70
		::System::String* NavmapConfigPath; // 0x78
		::System::String* RegionConfigPath; // 0x80
		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* ValidSubmapList; // 0x88
		::System::Boolean IsRestartLevelGraph; // 0x90
		::System::Boolean EnableGroupStreaming; // 0x91
		::System::Boolean EnableGroupSpaceConflict; // 0x92
		::System::Boolean EnableGroupRegionStreaming; // 0x93
		::System::Boolean IsAreaMapping2D; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelFloorInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
