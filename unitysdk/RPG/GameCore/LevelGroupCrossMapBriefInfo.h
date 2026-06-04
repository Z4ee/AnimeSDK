#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtLevelGroupInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }

#define RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_METHOD_2_9A52A211091CA4D1_OFFSET UNITYSDK_OFFSET(0x19876AC0)
#define RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19876BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupCrossMapBriefInfo_TypeDefinitionIndex = 16312;

	class LevelGroupCrossMapBriefInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtLevelGroupInstanceInfo* GroupInstanceInfo; // 0x10
		::RPG::GameCore::RtLevelGroupInfo* GroupInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A52A211091CA4D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupCrossMapBriefInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupCrossMapBriefInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_METHOD_2_9A52A211091CA4D1_OFFSET))(a1, a2);
		}
	};
}
