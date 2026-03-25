#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG_METHOD_6_6C6DA6C318280F5A_OFFSET UNITYSDK_OFFSET(0x175C4060)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG_METHOD_6_A1BED365A1C729FF_OFFSET UNITYSDK_OFFSET(0x175C4280)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C41A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardGiftConfig_TypeDefinitionIndex = 18131;

	class RogueActPersonaSelectRoomCardGiftConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6C6DA6C318280F5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG_METHOD_6_6C6DA6C318280F5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A1BED365A1C729FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDGIFTCONFIG_METHOD_6_A1BED365A1C729FF_OFFSET))(a1, a2);
		}
	};
}
