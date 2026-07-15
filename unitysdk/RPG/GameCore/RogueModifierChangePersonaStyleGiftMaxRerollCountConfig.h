#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_3A3ABEC277C7D68E_OFFSET UNITYSDK_OFFSET(0x1CFBF3A0)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_9AE7C79674ED8D72_OFFSET UNITYSDK_OFFSET(0x1CFBF350)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleGiftMaxRerollCountConfig_TypeDefinitionIndex = 17083;

	class RogueModifierChangePersonaStyleGiftMaxRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AE7C79674ED8D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_9AE7C79674ED8D72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A3ABEC277C7D68E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_3A3ABEC277C7D68E_OFFSET))(a1, a2);
		}
	};
}
