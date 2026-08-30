#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_METHOD_2_46C3E9C6655AD557_OFFSET UNITYSDK_OFFSET(0x1D1E82E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E8430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionConnectAreaInfo_TypeDefinitionIndex = 17102;

	class LevelPedestrianV2IntersectionConnectAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18
		::System::Int32 AreaIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_46C3E9C6655AD557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_METHOD_2_46C3E9C6655AD557_OFFSET))(a1, a2);
		}
	};
}
