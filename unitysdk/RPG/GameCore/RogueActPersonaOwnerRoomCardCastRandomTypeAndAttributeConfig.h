#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG_METHOD_7_AA587FFFA232C776_OFFSET UNITYSDK_OFFSET(0x1D3B9040)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG_METHOD_7_B494C196EA5271D2_OFFSET UNITYSDK_OFFSET(0x1D3B8F60)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig_TypeDefinitionIndex = 19531;

	class RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_AA587FFFA232C776(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG_METHOD_7_AA587FFFA232C776_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_B494C196EA5271D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRandomTypeAndAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTRANDOMTYPEANDATTRIBUTECONFIG_METHOD_7_B494C196EA5271D2_OFFSET))(a1, a2);
		}
	};
}
