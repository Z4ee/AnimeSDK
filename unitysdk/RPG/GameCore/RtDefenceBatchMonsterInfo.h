#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnTiming.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtDefenceSpawnMonsterInfo; }

#define RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_METHOD_2_4CF2FEF71BF17155_OFFSET UNITYSDK_OFFSET(0x19BE7370)
#define RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE75C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBatchMonsterInfo_TypeDefinitionIndex = 17177;

	class RtDefenceBatchMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Delay; // 0x10
		::RPG::GameCore::FixPoint Interval; // 0x18
		::RPG::GameCore::RtDefenceBatchSpawnTiming Timing; // 0x20
		::Il2CppArray<::RPG::GameCore::RtDefenceSpawnMonsterInfo*>* SpawnList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4CF2FEF71BF17155(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceBatchMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceBatchMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_METHOD_2_4CF2FEF71BF17155_OFFSET))(a1, a2);
		}
	};
}
