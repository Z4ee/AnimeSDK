#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6530)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D65D0)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D6580)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xB6D64C0)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D6620)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEndUseInsertAbility_TypeDefinitionIndex = 52303;

	class LevelEntityEndUseInsertAbility : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x20
		::RPG::GameCore::GameEntity* Target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityEndUseInsertAbility* Init(::RPG::GameCore::GameEntity* target, ::System::String* abilityName, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* customTag)
		{
			return ((::RPG::GameCore::LevelEntityEndUseInsertAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_INIT_OFFSET))(this, target, abilityName, customTag);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
