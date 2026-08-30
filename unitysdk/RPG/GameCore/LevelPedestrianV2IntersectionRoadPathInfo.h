#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_METHOD_2_103C81DA41C639C6_OFFSET UNITYSDK_OFFSET(0x1D1EA060)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionRoadPathInfo_TypeDefinitionIndex = 17100;

	class LevelPedestrianV2IntersectionRoadPathInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18
		::Il2CppArray<::RPG::MVector3>* ConnectPoints; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_103C81DA41C639C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_METHOD_2_103C81DA41C639C6_OFFSET))(a1, a2);
		}
	};
}
