#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_1CB8CBC69B962B41;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD23CA0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD23D40)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD23CF0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET UNITYSDK_OFFSET(0x1DD23C20)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD23D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbilityCheck_TypeDefinitionIndex = 56931;

	class LevelEntityUseInsertAbilityCheck : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::System::Boolean Silence; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbilityCheck* Init(::Class_1_1CB8CBC69B962B41* a1)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbilityCheck*(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET))(this, a1);
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
	};
}
