#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HPBarType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERCONFIG_METHOD_2_B8F2C23F109192E7_OFFSET UNITYSDK_OFFSET(0x199A5E20)
#define RPG_GAMECORE_MONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199A6260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterConfig_TypeDefinitionIndex = 15693;

	class MonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x10
		::System::Single MultiHitAmplitudeNormalize; // 0x14
		::System::Single MultiHitHAmplitudeNormalize; // 0x18
		::System::Single MultiHitStartOffsetNormalize; // 0x1C
		::System::Single MultiHitHStartOffsetNormalize; // 0x20
		::RPG::GameCore::HPBarType HPBarType; // 0x24
		::System::UInt32 MultiHPSeg; // 0x28
		::RPG::MVector3 ModelRotation; // 0x2C
		::RPG::MVector3 ModelScale; // 0x38
		::RPG::MVector3 ModelEffectScale; // 0x44
		::RPG::GameCore::MonsterRank ShowHpWidthRank; // 0x50
		::System::Boolean AddToTeamFormation; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B8F2C23F109192E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERCONFIG_METHOD_2_B8F2C23F109192E7_OFFSET))(a1, a2);
		}
	};
}
