#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5158E0)
#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETISLINKLEAD_OFFSET UNITYSDK_OFFSET(0xB5158A0)
#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB515860)
#define RPG_GAMECORE_ABILITYLINKMOVESTART__CTOR_OFFSET UNITYSDK_OFFSET(0xB515850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinkMoveStart_TypeDefinitionIndex = 52134;

	class AbilityLinkMoveStart : public ::System::Object
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x10
		::System::Boolean _IsLinkLead; // 0x14

		::System::Void _ctor(::System::UInt32 nSourceRuntimeID, ::System::Boolean bIsLinkLead)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINKMOVESTART__CTOR_OFFSET))(this, nSourceRuntimeID, bIsLinkLead);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINKMOVESTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Boolean GetIsLinkLead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINKMOVESTART_GETISLINKLEAD_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINKMOVESTART_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
