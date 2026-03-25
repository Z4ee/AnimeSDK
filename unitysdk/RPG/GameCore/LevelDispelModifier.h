#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELDISPELMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9874E0)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA987580)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA987530)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA987480)
#define RPG_GAMECORE_LEVELDISPELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9875D0)
#define RPG_GAMECORE_LEVELDISPELMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9875E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDispelModifier_TypeDefinitionIndex = 45672;

	class LevelDispelModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18
		::System::Boolean MuteVisualEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDispelModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* mdf, ::System::Boolean muteEfx)
		{
			return ((::RPG::GameCore::LevelDispelModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_INIT_OFFSET))(this, mdf, muteEfx);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
