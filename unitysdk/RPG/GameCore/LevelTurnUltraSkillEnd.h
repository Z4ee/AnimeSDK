#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xE69C750)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69C700)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69C6B0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xE69C790)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GET_TURNINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xE69C7D0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_SET_TURNINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xE69C7E0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND__CTOR_OFFSET UNITYSDK_OFFSET(0xE69C6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillEnd_TypeDefinitionIndex = 56904;

	class LevelTurnUltraSkillEnd : public ::System::Object
	{
	public:
		::Class_1_152140BAFD2DB102* _TurnInsertUltraSkillParams_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _CastEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_152140BAFD2DB102* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_152140BAFD2DB102*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETCASTENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETTURNCOUNTER_OFFSET))(this);
		}

		::Class_1_152140BAFD2DB102* get_TurnInsertUltraSkillParams()
		{
			return ((::Class_1_152140BAFD2DB102*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GET_TURNINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::System::Void set_TurnInsertUltraSkillParams(::Class_1_152140BAFD2DB102* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_SET_TURNINSERTULTRASKILLPARAMS_OFFSET))(this, a1);
		}
	};
}
