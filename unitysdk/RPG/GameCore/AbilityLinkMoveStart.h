#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106CDEF0)
#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETISLINKLEAD_OFFSET UNITYSDK_OFFSET(0x106CDEB0)
#define RPG_GAMECORE_ABILITYLINKMOVESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106CDE70)
#define RPG_GAMECORE_ABILITYLINKMOVESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x106CDE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinkMoveStart_TypeDefinitionIndex = 54043;

	class AbilityLinkMoveStart : public ::System::Object
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x10
		::System::Boolean _IsLinkLead; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINKMOVESTART__CTOR_OFFSET))(this, a1, a2);
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
