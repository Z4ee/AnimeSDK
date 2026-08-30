#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_5B7E90E1871FE6E6_OFFSET UNITYSDK_OFFSET(0x1EE86010)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_F508C11C5844108A_OFFSET UNITYSDK_OFFSET(0x1EE85FC0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig_TypeDefinitionIndex = 19516;

	class RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_F508C11C5844108A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_F508C11C5844108A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_5B7E90E1871FE6E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_5B7E90E1871FE6E6_OFFSET))(a1, a2);
		}
	};
}
