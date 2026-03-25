#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }

#define RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D2CA0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7D2D70)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7D2CF0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA7D2C50)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D2DC0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D2DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPreAddModifier_TypeDefinitionIndex = 45488;

	class AbilityPreAddModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddModifier* Init(::RPG::GameCore::BaseModifierInstance* pModifierInstance)
		{
			return ((::RPG::GameCore::AbilityPreAddModifier*(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET))(this, pModifierInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
