#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_METHOD_7_887CA16299E0AEB2_OFFSET UNITYSDK_OFFSET(0x18CC7FD0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_METHOD_7_CBC34F649E361CA7_OFFSET UNITYSDK_OFFSET(0x18CC82C0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC7EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig_TypeDefinitionIndex = 18763;

	class RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_CBC34F649E361CA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_METHOD_7_CBC34F649E361CA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_887CA16299E0AEB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_METHOD_7_887CA16299E0AEB2_OFFSET))(a1, a2);
		}
	};
}
