#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG_METHOD_7_6BCFAF11A7452595_OFFSET UNITYSDK_OFFSET(0x1D3B95D0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG_METHOD_7_887C37394B5D2B71_OFFSET UNITYSDK_OFFSET(0x1D3B9710)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B95C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig_TypeDefinitionIndex = 19507;

	class RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_887C37394B5D2B71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG_METHOD_7_887C37394B5D2B71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_6BCFAF11A7452595(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveRandomAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVERANDOMATTRIBUTECONFIG_METHOD_7_6BCFAF11A7452595_OFFSET))(a1, a2);
		}
	};
}
