#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_BB87D717072EB845_OFFSET UNITYSDK_OFFSET(0x1D3B9100)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_FA42C81C9E2000C9_OFFSET UNITYSDK_OFFSET(0x1D3B8FC0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig_TypeDefinitionIndex = 19530;

	class RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_BB87D717072EB845(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_BB87D717072EB845_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_FA42C81C9E2000C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_METHOD_7_FA42C81C9E2000C9_OFFSET))(a1, a2);
		}
	};
}
