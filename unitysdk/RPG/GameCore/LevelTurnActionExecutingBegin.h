#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xA9918D0)
#define RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA991880)
#define RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA991830)
#define RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xA991910)
#define RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA991820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnActionExecutingBegin_TypeDefinitionIndex = 45603;

	class LevelTurnActionExecutingBegin : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* ActiveEntity, ::System::UInt32 TurnCounter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN__CTOR_OFFSET))(this, ActiveEntity, TurnCounter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONEXECUTINGBEGIN_GETTURNCOUNTER_OFFSET))(this);
		}
	};
}
