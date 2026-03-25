#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA988650)
#define RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA988600)
#define RPG_GAMECORE_LEVELENTITYENDUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xA9885F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEndUseSkill_TypeDefinitionIndex = 45648;

	class LevelEntityEndUseSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* SkillTargets; // 0x18
		::System::Int32 SkillIndex; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* target, ::System::Int32 skillIndex, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* skillTargets)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSESKILL__CTOR_OFFSET))(this, target, skillIndex, skillTargets);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
