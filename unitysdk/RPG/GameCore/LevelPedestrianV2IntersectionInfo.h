#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionRoadPathInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryPairInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_METHOD_2_69EAE71BB72E4D07_OFFSET UNITYSDK_OFFSET(0x1C12C5E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_METHOD_2_D082F1034C3BD96B_OFFSET UNITYSDK_OFFSET(0x1C12C9B0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12AB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionInfo_TypeDefinitionIndex = 17103;

	class LevelPedestrianV2IntersectionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Origin; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::Single Radius; // 0x28
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* RoadEntries; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*>* RoadConnects; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*>* ForbidRoadEntries; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*>* RoadPathInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_69EAE71BB72E4D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_METHOD_2_69EAE71BB72E4D07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D082F1034C3BD96B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_METHOD_2_D082F1034C3BD96B_OFFSET))(a1, a2);
		}
	};
}
