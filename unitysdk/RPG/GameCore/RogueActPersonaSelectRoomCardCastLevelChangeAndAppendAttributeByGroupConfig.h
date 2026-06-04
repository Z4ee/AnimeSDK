#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_1E094ED71E9389A7_OFFSET UNITYSDK_OFFSET(0x19AF36D0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_DAC2A0D51A3E1BB2_OFFSET UNITYSDK_OFFSET(0x19AF2D00)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF2C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig_TypeDefinitionIndex = 18697;

	class RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_1E094ED71E9389A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_1E094ED71E9389A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_DAC2A0D51A3E1BB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_DAC2A0D51A3E1BB2_OFFSET))(a1, a2);
		}
	};
}
