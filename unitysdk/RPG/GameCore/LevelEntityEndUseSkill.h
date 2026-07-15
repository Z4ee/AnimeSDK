#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFAB70)
#define RPG_GAMECORE_LEVELENTITYENDUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFAB20)
#define RPG_GAMECORE_LEVELENTITYENDUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFAB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEndUseSkill_TypeDefinitionIndex = 54209;

	class LevelEntityEndUseSkill : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* SkillTargets; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Int32 SkillIndex; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSESKILL__CTOR_OFFSET))(this, a1, a2, a3);
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
