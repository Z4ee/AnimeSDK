#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_6E435CF68F0B2B83_OFFSET UNITYSDK_OFFSET(0x1D164290)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_AE8CF53AFF7B027F_OFFSET UNITYSDK_OFFSET(0x1D164240)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D164280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaStyleGiftPoolRuleConfig_TypeDefinitionIndex = 17146;

	class RogueModifierModifyPersonaStyleGiftPoolRuleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE8CF53AFF7B027F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_AE8CF53AFF7B027F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E435CF68F0B2B83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_6E435CF68F0B2B83_OFFSET))(a1, a2);
		}
	};
}
