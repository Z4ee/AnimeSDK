#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_C0B7C75C57A67EA0_OFFSET UNITYSDK_OFFSET(0x17163330)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_D4E8C8C085C34A22_OFFSET UNITYSDK_OFFSET(0x171669A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x171632E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentHPCompare_TypeDefinitionIndex = 14795;

	class DiceCombatPredicateConfig_CurrentHPCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D4E8C8C085C34A22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_D4E8C8C085C34A22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0B7C75C57A67EA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_C0B7C75C57A67EA0_OFFSET))(a1, a2);
		}
	};
}
