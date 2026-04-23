#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_DC5B230001B1C826_OFFSET UNITYSDK_OFFSET(0x18CC9AF0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_EE51B19BE1D5E083_OFFSET UNITYSDK_OFFSET(0x18CC9FC0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC9A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 18752;

	class RogueActPersonaOwnerRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_EE51B19BE1D5E083(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_EE51B19BE1D5E083_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_DC5B230001B1C826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_DC5B230001B1C826_OFFSET))(a1, a2);
		}
	};
}
