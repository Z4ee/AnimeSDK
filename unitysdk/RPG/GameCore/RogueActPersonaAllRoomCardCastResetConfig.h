#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_METHOD_7_999D6DE0A337BB53_OFFSET UNITYSDK_OFFSET(0x1D02ECE0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_METHOD_7_A266B1DB17223B8F_OFFSET UNITYSDK_OFFSET(0x1D02EDE0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02ECD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastResetConfig_TypeDefinitionIndex = 18988;

	class RogueActPersonaAllRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_A266B1DB17223B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_METHOD_7_A266B1DB17223B8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_999D6DE0A337BB53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_METHOD_7_999D6DE0A337BB53_OFFSET))(a1, a2);
		}
	};
}
