#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG_METHOD_7_1A47D04FD1A24C37_OFFSET UNITYSDK_OFFSET(0x1D3B8FE0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG_METHOD_7_600C4C5465A547F3_OFFSET UNITYSDK_OFFSET(0x1D3B9140)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastResetConfig_TypeDefinitionIndex = 19532;

	class RogueActPersonaOwnerRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_600C4C5465A547F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastResetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastResetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG_METHOD_7_600C4C5465A547F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_1A47D04FD1A24C37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRESETCONFIG_METHOD_7_1A47D04FD1A24C37_OFFSET))(a1, a2);
		}
	};
}
