#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_METHOD_4_4E67D03F0DD01887_OFFSET UNITYSDK_OFFSET(0x1D3F9B20)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_METHOD_4_98A4945ACDE3BC2B_OFFSET UNITYSDK_OFFSET(0x1D3F9AB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByRemoveAttributeConfig_TypeDefinitionIndex = 17485;

	class RogueModifierModifyBlackboardByRemoveAttributeConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E67D03F0DD01887(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_METHOD_4_4E67D03F0DD01887_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98A4945ACDE3BC2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_METHOD_4_98A4945ACDE3BC2B_OFFSET))(a1, a2);
		}
	};
}
