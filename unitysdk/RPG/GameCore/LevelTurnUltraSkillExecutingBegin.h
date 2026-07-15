#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0x19782870)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0x19782960)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19782910)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x197829A0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x197828C0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0x197829E0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0x19782810)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19782A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillExecutingBegin_TypeDefinitionIndex = 54182;

	class LevelTurnUltraSkillExecutingBegin : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _CastEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20
		::System::Int32 _SkillIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* Init(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETCASTENTITY_OFFSET))(this);
		}

		::System::Int32 GetSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSKILLINDEX_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETTURNCOUNTER_OFFSET))(this);
		}
	};
}
