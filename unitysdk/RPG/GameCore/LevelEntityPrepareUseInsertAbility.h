#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDFB070)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFB110)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFB0C0)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0x1BDFB010)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFB160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityPrepareUseInsertAbility_TypeDefinitionIndex = 54211;

	class LevelEntityPrepareUseInsertAbility : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::String* AbilityName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityPrepareUseInsertAbility* Init(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LevelEntityPrepareUseInsertAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
