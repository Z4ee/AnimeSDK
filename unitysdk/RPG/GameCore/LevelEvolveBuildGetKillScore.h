#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC7F0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFC7A0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0x1BDFC840)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET UNITYSDK_OFFSET(0x1BDFC730)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0x1BDFC850)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFC860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildGetKillScore_TypeDefinitionIndex = 54287;

	class LevelEvolveBuildGetKillScore : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::FixPoint _DeltaScore_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildGetKillScore* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelEvolveBuildGetKillScore*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeltaScore()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GET_DELTASCORE_OFFSET))(this);
		}

		::System::Void set_DeltaScore(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET))(this, a1);
		}
	};
}
