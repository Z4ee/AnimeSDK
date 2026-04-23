#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7E10)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D7EB0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D7E60)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET UNITYSDK_OFFSET(0xB6D7D90)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D7F00)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbilityCheck_TypeDefinitionIndex = 52300;

	class LevelEntityUseInsertAbilityCheck : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::System::Boolean Silence; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbilityCheck* Init(::Class_1_E3A8B05AA1BBEE81* insertInstance)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbilityCheck*(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET))(this, insertInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
