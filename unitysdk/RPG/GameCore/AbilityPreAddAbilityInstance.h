#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_A2D8E5AB4B623162;

#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB515FB0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5160A0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB516000)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xB515F60)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5160F0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB516100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPreAddAbilityInstance_TypeDefinitionIndex = 52139;

	class AbilityPreAddAbilityInstance : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Class_1_A2D8E5AB4B623162* AbilityInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddAbilityInstance* Init(::Class_1_A2D8E5AB4B623162* abilityInstance)
		{
			return ((::RPG::GameCore::AbilityPreAddAbilityInstance*(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_INIT_OFFSET))(this, abilityInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
