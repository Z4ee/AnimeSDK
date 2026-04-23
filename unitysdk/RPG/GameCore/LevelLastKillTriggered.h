#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELLASTKILLTRIGGERED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DD400)
#define RPG_GAMECORE_LEVELLASTKILLTRIGGERED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DD3B0)
#define RPG_GAMECORE_LEVELLASTKILLTRIGGERED__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DD450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLastKillTriggered_TypeDefinitionIndex = 52387;

	class LevelLastKillTriggered : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x10
		::RPG::GameCore::SkillConfig* Skill; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLASTKILLTRIGGERED__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLASTKILLTRIGGERED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLASTKILLTRIGGERED_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
