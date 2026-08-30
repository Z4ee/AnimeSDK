#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_METHOD_3_8A860F85B15FC736_OFFSET UNITYSDK_OFFSET(0x1D3FCBD0)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_METHOD_3_F9BB1929E57BCEDA_OFFSET UNITYSDK_OFFSET(0x1D3FCB80)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FCBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuppressStyleGiftSelectConfig_TypeDefinitionIndex = 17594;

	class RogueModifierSuppressStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9BB1929E57BCEDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_METHOD_3_F9BB1929E57BCEDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A860F85B15FC736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_METHOD_3_8A860F85B15FC736_OFFSET))(a1, a2);
		}
	};
}
