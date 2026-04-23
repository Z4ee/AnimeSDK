#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_208BEB1120A3EFD3_OFFSET UNITYSDK_OFFSET(0x18D3C1F0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_92E6833FDF64B70A_OFFSET UNITYSDK_OFFSET(0x18D33F40)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D33EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableDiceReRollFreeConfig_TypeDefinitionIndex = 17053;

	class RogueModifierEnableDiceReRollFreeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_208BEB1120A3EFD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_208BEB1120A3EFD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92E6833FDF64B70A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_92E6833FDF64B70A_OFFSET))(a1, a2);
		}
	};
}
