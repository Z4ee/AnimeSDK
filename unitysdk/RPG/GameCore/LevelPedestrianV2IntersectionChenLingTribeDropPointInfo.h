#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_METHOD_2_EC8589995696CC46_OFFSET UNITYSDK_OFFSET(0x19883420)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19883570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingTribeDropPointInfo_TypeDefinitionIndex = 16460;

	class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntry; // 0x10
		::System::UInt32 RoadPointIndex; // 0x18
		::System::UInt32 MaxDropCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC8589995696CC46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_METHOD_2_EC8589995696CC46_OFFSET))(a1, a2);
		}
	};
}
