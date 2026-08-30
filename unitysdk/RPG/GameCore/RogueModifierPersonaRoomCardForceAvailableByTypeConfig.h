#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_METHOD_3_CC706D48DE97262E_OFFSET UNITYSDK_OFFSET(0x1EEFC190)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_METHOD_3_E671C546D02AF7EA_OFFSET UNITYSDK_OFFSET(0x1EEFC1E0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceAvailableByTypeConfig_TypeDefinitionIndex = 17601;

	class RogueModifierPersonaRoomCardForceAvailableByTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC706D48DE97262E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_METHOD_3_CC706D48DE97262E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E671C546D02AF7EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_METHOD_3_E671C546D02AF7EA_OFFSET))(a1, a2);
		}
	};
}
