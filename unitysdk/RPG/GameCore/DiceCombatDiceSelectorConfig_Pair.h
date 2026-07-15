#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR_METHOD_3_6BA16AC62CF3E988_OFFSET UNITYSDK_OFFSET(0x1C10F080)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR_METHOD_3_D0ECFDC65937983A_OFFSET UNITYSDK_OFFSET(0x1C10FE20)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10F020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Pair_TypeDefinitionIndex = 15531;

	class DiceCombatDiceSelectorConfig_Pair : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AtLeastPairCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0ECFDC65937983A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR_METHOD_3_D0ECFDC65937983A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BA16AC62CF3E988(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_PAIR_METHOD_3_6BA16AC62CF3E988_OFFSET))(a1, a2);
		}
	};
}
