#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG_METHOD_3_5A0C93DCDD07C13E_OFFSET UNITYSDK_OFFSET(0x1D3FB870)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG_METHOD_3_D6C3630CABC38A22_OFFSET UNITYSDK_OFFSET(0x1D3FB820)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceWashIfSelectConfig_TypeDefinitionIndex = 17604;

	class RogueModifierPersonaRoomCardForceWashIfSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6C3630CABC38A22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG_METHOD_3_D6C3630CABC38A22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A0C93DCDD07C13E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFSELECTCONFIG_METHOD_3_5A0C93DCDD07C13E_OFFSET))(a1, a2);
		}
	};
}
