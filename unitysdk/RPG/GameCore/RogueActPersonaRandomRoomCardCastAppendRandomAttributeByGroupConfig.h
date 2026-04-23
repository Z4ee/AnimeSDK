#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG_METHOD_7_D142A04756C908DC_OFFSET UNITYSDK_OFFSET(0x18CCAC80)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG_METHOD_7_E142FF1A52523711_OFFSET UNITYSDK_OFFSET(0x18CCAEA0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig_TypeDefinitionIndex = 18737;

	class RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_D142A04756C908DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG_METHOD_7_D142A04756C908DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_E142FF1A52523711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendRandomAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDRANDOMATTRIBUTEBYGROUPCONFIG_METHOD_7_E142FF1A52523711_OFFSET))(a1, a2);
		}
	};
}
