#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_9B79C5FD52A101C2_OFFSET UNITYSDK_OFFSET(0x1D3B8690)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_BDC3EB5B8ED80ADE_OFFSET UNITYSDK_OFFSET(0x1D3B86E0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B86D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig_TypeDefinitionIndex = 19537;

	class RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_9B79C5FD52A101C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_9B79C5FD52A101C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_BDC3EB5B8ED80ADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_BDC3EB5B8ED80ADE_OFFSET))(a1, a2);
		}
	};
}
