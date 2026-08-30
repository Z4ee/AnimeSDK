#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelGroupCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELFLOORCROSSMAPBRIEFINFO_METHOD_2_4FD1BA5AED6844D6_OFFSET UNITYSDK_OFFSET(0x1D1D1060)
#define RPG_GAMECORE_LEVELFLOORCROSSMAPBRIEFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorCrossMapBriefInfo_TypeDefinitionIndex = 16968;

	class LevelFloorCrossMapBriefInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::String* NavmapConfigPath; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelGroupCrossMapBriefInfo*>* GroupList; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelDimensionCrossMapBriefInfo*>* DimensionList; // 0x28
		::Il2CppArray<::RPG::GameCore::LevelFeatureType>* LevelFeatureModules; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*>* GroupInstanceCommonMap; // 0x38
		::Il2CppArray<::System::Int32>* LayerToAreaMask; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* ValidSubmapList; // 0x48
		::System::UInt32 StartGroupIndex; // 0x50
		::System::UInt32 StartAnchorID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORCROSSMAPBRIEFINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4FD1BA5AED6844D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorCrossMapBriefInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorCrossMapBriefInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORCROSSMAPBRIEFINFO_METHOD_2_4FD1BA5AED6844D6_OFFSET))(a1, a2);
		}
	};
}
