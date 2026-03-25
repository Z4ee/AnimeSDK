#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_METHOD_7_34ED63F73D142DD7_OFFSET UNITYSDK_OFFSET(0x175BB240)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_METHOD_7_4B84E23D129B7E62_OFFSET UNITYSDK_OFFSET(0x175BAE10)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BAD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastRemoveConfig_TypeDefinitionIndex = 18096;

	class RogueActPersonaAllRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_34ED63F73D142DD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_METHOD_7_34ED63F73D142DD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_4B84E23D129B7E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_METHOD_7_4B84E23D129B7E62_OFFSET))(a1, a2);
		}
	};
}
