#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_METHOD_7_12EB539606EF860B_OFFSET UNITYSDK_OFFSET(0x175C0360)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_METHOD_7_B5CA4D9E24AF55CE_OFFSET UNITYSDK_OFFSET(0x175BFE90)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BFDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveConfig_TypeDefinitionIndex = 18088;

	class RogueActPersonaRandomRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_12EB539606EF860B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_METHOD_7_12EB539606EF860B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_B5CA4D9E24AF55CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_METHOD_7_B5CA4D9E24AF55CE_OFFSET))(a1, a2);
		}
	};
}
