#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_41098F45FC41FC74_OFFSET UNITYSDK_OFFSET(0x18870200)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_4AA7042E0FAC0071_OFFSET UNITYSDK_OFFSET(0x1886DF70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886DF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasModifier_TypeDefinitionIndex = 15256;

	class DiceCombatPredicateConfig_HasModifier : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::UInt32 ModifierID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_41098F45FC41FC74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_41098F45FC41FC74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4AA7042E0FAC0071(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_4AA7042E0FAC0071_OFFSET))(a1, a2);
		}
	};
}
