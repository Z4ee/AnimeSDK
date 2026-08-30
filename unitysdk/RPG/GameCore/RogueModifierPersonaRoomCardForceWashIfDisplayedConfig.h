#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_METHOD_3_2699B42351395CE7_OFFSET UNITYSDK_OFFSET(0x1EEFC370)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_METHOD_3_DA2529AC4F25398B_OFFSET UNITYSDK_OFFSET(0x1EEFC3C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceWashIfDisplayedConfig_TypeDefinitionIndex = 17603;

	class RogueModifierPersonaRoomCardForceWashIfDisplayedConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2699B42351395CE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_METHOD_3_2699B42351395CE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA2529AC4F25398B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_METHOD_3_DA2529AC4F25398B_OFFSET))(a1, a2);
		}
	};
}
