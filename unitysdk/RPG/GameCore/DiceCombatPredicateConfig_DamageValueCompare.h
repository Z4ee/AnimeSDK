#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_2C58F60EFBF0CDAF_OFFSET UNITYSDK_OFFSET(0x1C1162A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_837F687D89576C51_OFFSET UNITYSDK_OFFSET(0x1C1132B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1132A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DamageValueCompare_TypeDefinitionIndex = 15502;

	class DiceCombatPredicateConfig_DamageValueCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2C58F60EFBF0CDAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_2C58F60EFBF0CDAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_837F687D89576C51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_837F687D89576C51_OFFSET))(a1, a2);
		}
	};
}
