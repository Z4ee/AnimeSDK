#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_6E435CF68F0B2B83_OFFSET UNITYSDK_OFFSET(0x18D41DD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_78F5D750E0722FCA_OFFSET UNITYSDK_OFFSET(0x18D41D00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaStyleGiftPoolRuleConfig_TypeDefinitionIndex = 16969;

	class RogueModifierModifyPersonaStyleGiftPoolRuleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78F5D750E0722FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_78F5D750E0722FCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E435CF68F0B2B83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_METHOD_3_6E435CF68F0B2B83_OFFSET))(a1, a2);
		}
	};
}
