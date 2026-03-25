#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG_METHOD_3_89B16DEC487F35E8_OFFSET UNITYSDK_OFFSET(0x17634FF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG_METHOD_3_FFFB1DB462931F41_OFFSET UNITYSDK_OFFSET(0x176350C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17635070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomContentCountConfig_TypeDefinitionIndex = 16347;

	class RogueModifierModifyPersonaRoomContentCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89B16DEC487F35E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG_METHOD_3_89B16DEC487F35E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFFB1DB462931F41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTCONFIG_METHOD_3_FFFB1DB462931F41_OFFSET))(a1, a2);
		}
	};
}
