#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_3A7583FC600C0A78_OFFSET UNITYSDK_OFFSET(0x175BC7D0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_9225B42228C110B5_OFFSET UNITYSDK_OFFSET(0x175BC440)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BC360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 18116;

	class RogueActPersonaCurRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_3A7583FC600C0A78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_3A7583FC600C0A78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_9225B42228C110B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_9225B42228C110B5_OFFSET))(a1, a2);
		}
	};
}
