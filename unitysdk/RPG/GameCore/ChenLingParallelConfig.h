#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_2DC7C1944B07266A_OFFSET UNITYSDK_OFFSET(0x1962ED30)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_A7B165D39AE8F1C2_OFFSET UNITYSDK_OFFSET(0x1962ED90)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1962ED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingParallelConfig_TypeDefinitionIndex = 15041;

	class ChenLingParallelConfig : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* ParallelComposite; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DC7C1944B07266A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingParallelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingParallelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_2DC7C1944B07266A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7B165D39AE8F1C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingParallelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_A7B165D39AE8F1C2_OFFSET))(a1, a2);
		}
	};
}
