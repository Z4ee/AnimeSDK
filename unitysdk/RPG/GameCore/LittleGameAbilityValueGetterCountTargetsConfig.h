#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_METHOD_3_98B281E9EC557F74_OFFSET UNITYSDK_OFFSET(0x19897680)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_METHOD_3_BFE48BBDE1F27288_OFFSET UNITYSDK_OFFSET(0x198975B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19897670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterCountTargetsConfig_TypeDefinitionIndex = 20215;

	class LittleGameAbilityValueGetterCountTargetsConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFE48BBDE1F27288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_METHOD_3_BFE48BBDE1F27288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98B281E9EC557F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_METHOD_3_98B281E9EC557F74_OFFSET))(a1, a2);
		}
	};
}
