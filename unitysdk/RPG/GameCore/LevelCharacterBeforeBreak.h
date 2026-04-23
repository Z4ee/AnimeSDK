#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CB780)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CB820)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CB7D0)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_INIT_OFFSET UNITYSDK_OFFSET(0xB6CB710)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CB870)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CB880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBeforeBreak_TypeDefinitionIndex = 52347;

	class LevelCharacterBeforeBreak : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20
		::System::Boolean IsRedStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBeforeBreak* Init(::RPG::GameCore::GameEntity* pAttackerEntity, ::RPG::GameCore::GameEntity* pTargetEntity, ::System::Boolean isRedStance)
		{
			return ((::RPG::GameCore::LevelCharacterBeforeBreak*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_INIT_OFFSET))(this, pAttackerEntity, pTargetEntity, isRedStance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
