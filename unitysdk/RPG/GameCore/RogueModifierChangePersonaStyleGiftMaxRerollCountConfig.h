#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_3A3ABEC277C7D68E_OFFSET UNITYSDK_OFFSET(0x19B4EA20)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_C0F7E9C64391A7B7_OFFSET UNITYSDK_OFFSET(0x19B4E950)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4E9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleGiftMaxRerollCountConfig_TypeDefinitionIndex = 16921;

	class RogueModifierChangePersonaStyleGiftMaxRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0F7E9C64391A7B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_C0F7E9C64391A7B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A3ABEC277C7D68E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleGiftMaxRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLEGIFTMAXREROLLCOUNTCONFIG_METHOD_3_3A3ABEC277C7D68E_OFFSET))(a1, a2);
		}
	};
}
