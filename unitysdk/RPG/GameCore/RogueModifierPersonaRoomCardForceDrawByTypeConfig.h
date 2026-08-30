#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_METHOD_3_2EEC3433DFB451F9_OFFSET UNITYSDK_OFFSET(0x1EEFC2A0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_METHOD_3_C0D6D8AD39248BF5_OFFSET UNITYSDK_OFFSET(0x1EEFC250)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceDrawByTypeConfig_TypeDefinitionIndex = 17600;

	class RogueModifierPersonaRoomCardForceDrawByTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0D6D8AD39248BF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_METHOD_3_C0D6D8AD39248BF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EEC3433DFB451F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_METHOD_3_2EEC3433DFB451F9_OFFSET))(a1, a2);
		}
	};
}
