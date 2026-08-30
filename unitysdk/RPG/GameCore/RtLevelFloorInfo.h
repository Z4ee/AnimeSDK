#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/RPG/GameCore/MapCameraType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RtLevelDimensionInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTLEVELFLOORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4AB2C0)
#define RPG_GAMECORE_RTLEVELFLOORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AB9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelFloorInfo_TypeDefinitionIndex = 17154;

	class RtLevelFloorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 StartGroupIndex; // 0x14
		::System::UInt32 StartAnchorID; // 0x18
		::System::String* StageData; // 0x20
		::RPG::GameCore::MapCameraType CameraType; // 0x28
		::Il2CppArray<::System::Int32>* LayerToAreaMask; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelFeatureType>* LevelFeatureModules; // 0x38
		::System::String* NavmapConfigPath; // 0x40
		::System::String* RegionConfigPath; // 0x48
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* CustomValues; // 0x50
		::Il2CppArray<::RPG::GameCore::RtLevelGroupInstanceInfo*>* GroupInstanceList; // 0x58
		::Il2CppArray<::RPG::GameCore::RtLevelDimensionInfo*>* DimensionList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*>* GroupInstanceCommonMap; // 0x68
		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* ValidSubmapList; // 0x70
		::System::Boolean IsRestartLevelGraph; // 0x78
		::System::Boolean EnableGroupStreaming; // 0x79
		::System::Boolean EnableGroupSpaceConflict; // 0x7A
		::System::Boolean EnableGroupRegionStreaming; // 0x7B
		::System::Boolean IsAreaMapping2D; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELFLOORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelFloorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelFloorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELFLOORINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
