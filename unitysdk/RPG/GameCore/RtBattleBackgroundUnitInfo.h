#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_METHOD_2_ECA9BA2E3541CBB1_OFFSET UNITYSDK_OFFSET(0x19BD9280)
#define RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD94F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleBackgroundUnitInfo_TypeDefinitionIndex = 17163;

	class RtBattleBackgroundUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Boolean UseTeamDir; // 0x14
		::RPG::GameCore::FixPoint DirAngle; // 0x18
		::System::UInt32 UnitID; // 0x20
		::System::UInt32 Level; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ECA9BA2E3541CBB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleBackgroundUnitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleBackgroundUnitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_METHOD_2_ECA9BA2E3541CBB1_OFFSET))(a1, a2);
		}
	};
}
