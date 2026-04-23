#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_6FB9DE422607E45B_OFFSET UNITYSDK_OFFSET(0x18CC74B0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_BDC3EB5B8ED80ADE_OFFSET UNITYSDK_OFFSET(0x18CC76D0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC75F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig_TypeDefinitionIndex = 18764;

	class RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_6FB9DE422607E45B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_6FB9DE422607E45B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_BDC3EB5B8ED80ADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_METHOD_7_BDC3EB5B8ED80ADE_OFFSET))(a1, a2);
		}
	};
}
