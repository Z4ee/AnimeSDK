#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84ADD0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84AEA0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84AE50)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xA84AD70)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA84AEF0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84AF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnBeStrikeByTimeRewindEntity_TypeDefinitionIndex = 45549;

	class AdventureOnBeStrikeByTimeRewindEntity : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* SourceTimeRewindEntity; // 0x18
		::RPG::GameCore::GameEntity* BeStrikeEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity* Init(::RPG::GameCore::GameEntity* beStrikeEntity, ::RPG::GameCore::GameEntity* sourceTimeRewindEntity)
		{
			return ((::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET))(this, beStrikeEntity, sourceTimeRewindEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
