#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_2D1D988684420400_OFFSET UNITYSDK_OFFSET(0x17166F40)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_524798FA21E548DA_OFFSET UNITYSDK_OFFSET(0x17164B40)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x17164AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HPFull_TypeDefinitionIndex = 14789;

	class DiceCombatPredicateConfig_HPFull : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D1D988684420400(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_2D1D988684420400_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_524798FA21E548DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_524798FA21E548DA_OFFSET))(a1, a2);
		}
	};
}
