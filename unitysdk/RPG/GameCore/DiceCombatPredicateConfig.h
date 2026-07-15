#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_1C4A14D214741FA6_OFFSET UNITYSDK_OFFSET(0x1C115F00)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_CD34B14E5F611AC9_OFFSET UNITYSDK_OFFSET(0x1C1117E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_TypeDefinitionIndex = 15473;

	class DiceCombatPredicateConfig : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnSuccess; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnFail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD34B14E5F611AC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_CD34B14E5F611AC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C4A14D214741FA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_1C4A14D214741FA6_OFFSET))(a1, a2);
		}
	};
}
