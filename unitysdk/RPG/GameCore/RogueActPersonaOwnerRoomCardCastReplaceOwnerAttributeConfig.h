#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_93FA2B62168DA694_OFFSET UNITYSDK_OFFSET(0x18CCA4C0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_FA42C81C9E2000C9_OFFSET UNITYSDK_OFFSET(0x18CC9EB0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC9DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig_TypeDefinitionIndex = 18757;

	class RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_93FA2B62168DA694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_93FA2B62168DA694_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_FA42C81C9E2000C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_FA42C81C9E2000C9_OFFSET))(a1, a2);
		}
	};
}
