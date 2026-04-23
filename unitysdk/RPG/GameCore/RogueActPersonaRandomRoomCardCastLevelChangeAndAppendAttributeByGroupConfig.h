#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_09D319CBD5C6BB6D_OFFSET UNITYSDK_OFFSET(0x18CCB930)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_0A3695DB39C1F250_OFFSET UNITYSDK_OFFSET(0x18CCBD10)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCB850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig_TypeDefinitionIndex = 18736;

	class RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_0A3695DB39C1F250(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_0A3695DB39C1F250_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_09D319CBD5C6BB6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_09D319CBD5C6BB6D_OFFSET))(a1, a2);
		}
	};
}
