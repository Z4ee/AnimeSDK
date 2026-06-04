#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_066687323EB4F1E9_OFFSET UNITYSDK_OFFSET(0x19AF3810)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_DE9EF1C12EC0CB84_OFFSET UNITYSDK_OFFSET(0x19AF2DF0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF2D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig_TypeDefinitionIndex = 18696;

	class RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_066687323EB4F1E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_066687323EB4F1E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_DE9EF1C12EC0CB84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_DE9EF1C12EC0CB84_OFFSET))(a1, a2);
		}
	};
}
