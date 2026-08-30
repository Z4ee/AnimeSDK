#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_METHOD_2_14EE3F14D857C8CC_OFFSET UNITYSDK_OFFSET(0x1D1EA800)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadEntryPairInfo_TypeDefinitionIndex = 17098;

	class LevelPedestrianV2RoadEntryPairInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_14EE3F14D857C8CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_METHOD_2_14EE3F14D857C8CC_OFFSET))(a1, a2);
		}
	};
}
