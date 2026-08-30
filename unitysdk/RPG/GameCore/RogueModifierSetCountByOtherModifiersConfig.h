#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_METHOD_3_010C9A3A09DC070C_OFFSET UNITYSDK_OFFSET(0x1D3FC770)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_METHOD_3_586DEDB5E27EBB88_OFFSET UNITYSDK_OFFSET(0x1D3FC7C0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByOtherModifiersConfig_TypeDefinitionIndex = 17511;

	class RogueModifierSetCountByOtherModifiersConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_010C9A3A09DC070C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_METHOD_3_010C9A3A09DC070C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_586DEDB5E27EBB88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_METHOD_3_586DEDB5E27EBB88_OFFSET))(a1, a2);
		}
	};
}
