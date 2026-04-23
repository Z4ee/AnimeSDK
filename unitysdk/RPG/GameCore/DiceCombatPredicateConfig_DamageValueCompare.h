#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_A690447DF1B62172_OFFSET UNITYSDK_OFFSET(0x1886C2D0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_F507C3384FACF4DD_OFFSET UNITYSDK_OFFSET(0x1886FAA0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DamageValueCompare_TypeDefinitionIndex = 15279;

	class DiceCombatPredicateConfig_DamageValueCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F507C3384FACF4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_F507C3384FACF4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A690447DF1B62172(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_METHOD_4_A690447DF1B62172_OFFSET))(a1, a2);
		}
	};
}
