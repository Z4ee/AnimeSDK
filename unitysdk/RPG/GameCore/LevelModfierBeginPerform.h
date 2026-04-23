#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DDCB0)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DDD50)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DDD00)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET UNITYSDK_OFFSET(0xB6DDC60)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DDDA0)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DDDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelModfierBeginPerform_TypeDefinitionIndex = 52328;

	class LevelModfierBeginPerform : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModfierBeginPerform* Init(::RPG::GameCore::TurnBasedModifierInstance* mdf)
		{
			return ((::RPG::GameCore::LevelModfierBeginPerform*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET))(this, mdf);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
