#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_METHOD_7_43C44FC95B2C6B43_OFFSET UNITYSDK_OFFSET(0x1D3B8650)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_METHOD_7_7FFA15B887C55EC7_OFFSET UNITYSDK_OFFSET(0x1D3B8530)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastSuperConfig_TypeDefinitionIndex = 19517;

	class RogueActPersonaAllRoomCardCastSuperConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_43C44FC95B2C6B43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_METHOD_7_43C44FC95B2C6B43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7FFA15B887C55EC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_METHOD_7_7FFA15B887C55EC7_OFFSET))(a1, a2);
		}
	};
}
