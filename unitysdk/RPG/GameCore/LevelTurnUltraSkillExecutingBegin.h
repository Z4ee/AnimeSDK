#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6E1BE0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xB6E1CD0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E1C80)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB6E1D10)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E1C30)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xB6E1D50)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0xB6E1B80)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E1D90)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6E1DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillExecutingBegin_TypeDefinitionIndex = 52272;

	class LevelTurnUltraSkillExecutingBegin : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _CastEntity; // 0x18
		::System::Int32 _SkillIndex; // 0x20
		::System::UInt32 _TurnCounter; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* Init(::RPG::GameCore::GameEntity* CastEntity, ::System::Int32 SkillIndex, ::System::UInt32 TurnCounter)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN_INIT_OFFSET))(this, CastEntity, SkillIndex, TurnCounter);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEXECUTINGBEGIN___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
