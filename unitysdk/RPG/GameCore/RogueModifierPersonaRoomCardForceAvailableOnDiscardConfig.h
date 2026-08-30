#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_METHOD_3_021EB156A7B6FDA2_OFFSET UNITYSDK_OFFSET(0x1EEFC240)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_METHOD_3_C9CFF0857D7E9106_OFFSET UNITYSDK_OFFSET(0x1EEFC1F0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig_TypeDefinitionIndex = 17598;

	class RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9CFF0857D7E9106(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_METHOD_3_C9CFF0857D7E9106_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_021EB156A7B6FDA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_METHOD_3_021EB156A7B6FDA2_OFFSET))(a1, a2);
		}
	};
}
