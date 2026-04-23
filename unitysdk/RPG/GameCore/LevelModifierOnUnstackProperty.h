#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DDE70)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DDF10)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DDEC0)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0xB6DDE20)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DDF60)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DDF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelModifierOnUnstackProperty_TypeDefinitionIndex = 52326;

	class LevelModifierOnUnstackProperty : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModifierOnUnstackProperty* Init(::RPG::GameCore::TurnBasedModifierInstance* mdf)
		{
			return ((::RPG::GameCore::LevelModifierOnUnstackProperty*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET))(this, mdf);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
