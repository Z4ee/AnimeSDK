#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_METHOD_3_2F5785A37C3A188A_OFFSET UNITYSDK_OFFSET(0x1D165310)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_METHOD_3_48DD6BF84779A64E_OFFSET UNITYSDK_OFFSET(0x1D1652C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceSelectConfig_TypeDefinitionIndex = 17088;

	class RogueModifierPersonaRoomCardForceSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48DD6BF84779A64E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_METHOD_3_48DD6BF84779A64E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F5785A37C3A188A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_METHOD_3_2F5785A37C3A188A_OFFSET))(a1, a2);
		}
	};
}
