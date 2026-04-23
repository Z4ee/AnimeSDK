#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_33B03021AF536D17_OFFSET UNITYSDK_OFFSET(0x18D3F150)
#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_F91DDD936AD7B8EE_OFFSET UNITYSDK_OFFSET(0x18D3F220)
#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierGetStyleGiftWithRemovedCardPropertyConfig_TypeDefinitionIndex = 16945;

	class RogueModifierGetStyleGiftWithRemovedCardPropertyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33B03021AF536D17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_33B03021AF536D17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F91DDD936AD7B8EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_F91DDD936AD7B8EE_OFFSET))(a1, a2);
		}
	};
}
