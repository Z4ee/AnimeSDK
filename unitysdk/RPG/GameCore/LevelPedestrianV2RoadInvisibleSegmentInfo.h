#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_METHOD_2_800E07D3EBAA2F0A_OFFSET UNITYSDK_OFFSET(0x19885D00)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19885DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadInvisibleSegmentInfo_TypeDefinitionIndex = 16441;

	class LevelPedestrianV2RoadInvisibleSegmentInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoadPointIndexA; // 0x10
		::System::UInt32 RoadPointIndexB; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_800E07D3EBAA2F0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_METHOD_2_800E07D3EBAA2F0A_OFFSET))(a1, a2);
		}
	};
}
