#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_503BBEAF461C5A2E_OFFSET UNITYSDK_OFFSET(0x1EE86840)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_D032567539283992_OFFSET UNITYSDK_OFFSET(0x1EE86920)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig_TypeDefinitionIndex = 19538;

	class RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_D032567539283992(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_D032567539283992_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_503BBEAF461C5A2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastReplaceAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_503BBEAF461C5A2E_OFFSET))(a1, a2);
		}
	};
}
