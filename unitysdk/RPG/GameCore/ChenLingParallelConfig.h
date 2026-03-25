#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_11D5648AEF8D8117_OFFSET UNITYSDK_OFFSET(0x17087E10)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_FC888D44089710D7_OFFSET UNITYSDK_OFFSET(0x17087DB0)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17087E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingParallelConfig_TypeDefinitionIndex = 14508;

	class ChenLingParallelConfig : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* ParallelComposite; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC888D44089710D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingParallelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingParallelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_FC888D44089710D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11D5648AEF8D8117(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingParallelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_METHOD_3_11D5648AEF8D8117_OFFSET))(a1, a2);
		}
	};
}
