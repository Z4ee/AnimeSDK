#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_152140BAFD2DB102;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xA993B70)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA993AE0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xA993B30)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA993A90)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xA993A30)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xA993BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillPerformFinish_TypeDefinitionIndex = 45619;

	class LevelTurnUltraSkillPerformFinish : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Class_1_152140BAFD2DB102* _InsertUltraSkillParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillPerformFinish* Init(::Class_1_152140BAFD2DB102* InsertUltraSkillParams, ::System::UInt32 TurnCounter)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillPerformFinish*(*)(::PVOID, ::Class_1_152140BAFD2DB102*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_INIT_OFFSET))(this, InsertUltraSkillParams, TurnCounter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::Class_1_152140BAFD2DB102* GetInsertUltraSkillParams()
		{
			return ((::Class_1_152140BAFD2DB102*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETACTIVEENTITY_OFFSET))(this);
		}
	};
}
