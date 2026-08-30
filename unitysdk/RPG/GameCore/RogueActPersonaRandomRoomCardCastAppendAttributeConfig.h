#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_9E07DAA496F1BA88_OFFSET UNITYSDK_OFFSET(0x1EE87030)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_DBFE29F6F0468E44_OFFSET UNITYSDK_OFFSET(0x1EE87080)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE87070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastAppendAttributeConfig_TypeDefinitionIndex = 19508;

	class RogueActPersonaRandomRoomCardCastAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_9E07DAA496F1BA88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_9E07DAA496F1BA88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_DBFE29F6F0468E44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_DBFE29F6F0468E44_OFFSET))(a1, a2);
		}
	};
}
