#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillData; }

#define RPG_GAMECORE_LEVELSETACTIVESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DF610)
#define RPG_GAMECORE_LEVELSETACTIVESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DF5C0)
#define RPG_GAMECORE_LEVELSETACTIVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DF660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSetActiveSkill_TypeDefinitionIndex = 52388;

	class LevelSetActiveSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* SkillTargetCandidates; // 0x10
		::RPG::GameCore::SkillData* ActiveSkillData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSETACTIVESKILL__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSETACTIVESKILL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSETACTIVESKILL_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
