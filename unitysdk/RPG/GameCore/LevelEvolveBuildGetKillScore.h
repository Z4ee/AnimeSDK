#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98A6A0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98A650)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0xA98A6F0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET UNITYSDK_OFFSET(0xA98A600)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0xA98A700)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xA98A710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildGetKillScore_TypeDefinitionIndex = 45724;

	class LevelEvolveBuildGetKillScore : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint _DeltaScore_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildGetKillScore* Init(::System::UInt32 delta)
		{
			return ((::RPG::GameCore::LevelEvolveBuildGetKillScore*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET))(this, delta);
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

		::System::Void set_DeltaScore(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET))(this, value);
		}
	};
}
