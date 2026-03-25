#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace RPG::GameCore { class NavMeshLinkInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_METHOD_2_EAC1D4C7856584AE_OFFSET UNITYSDK_OFFSET(0x17345FB0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17349650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadMapInfo_TypeDefinitionIndex = 15901;

	class LevelPedestrianV2RoadMapInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadInfo*>* Roads; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionInfo*>* Intersections; // 0x18
		::Il2CppArray<::RPG::GameCore::NavMeshLinkInfo*>* NavMeshLinks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EAC1D4C7856584AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_METHOD_2_EAC1D4C7856584AE_OFFSET))(a1, a2);
		}
	};
}
