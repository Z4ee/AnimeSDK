#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA988C30)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA988CD0)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA988C80)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xA988BD0)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA988D20)
#define RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA988D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityPrepareUseInsertAbility_TypeDefinitionIndex = 45650;

	class LevelEntityPrepareUseInsertAbility : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::String* AbilityName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityPrepareUseInsertAbility* Init(::RPG::GameCore::GameEntity* target, ::System::String* abilityName)
		{
			return ((::RPG::GameCore::LevelEntityPrepareUseInsertAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY_INIT_OFFSET))(this, target, abilityName);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYPREPAREUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
