#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_METHOD_3_083C3984F7729D83_OFFSET UNITYSDK_OFFSET(0x1D3F7350)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_METHOD_3_4885D1C967E2747F_OFFSET UNITYSDK_OFFSET(0x1D3F7300)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F7340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDisableAttributeAppendByCategoryConfig_TypeDefinitionIndex = 17632;

	class RogueModifierDisableAttributeAppendByCategoryConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4885D1C967E2747F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_METHOD_3_4885D1C967E2747F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_083C3984F7729D83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_METHOD_3_083C3984F7729D83_OFFSET))(a1, a2);
		}
	};
}
