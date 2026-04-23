#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_METHOD_2_BD35E0748722E7E6_OFFSET UNITYSDK_OFFSET(0x18863AF0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_METHOD_2_D9E754DF168FB9D7_OFFSET UNITYSDK_OFFSET(0x18862860)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18863B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_TypeDefinitionIndex = 15332;

	class DiceCombatAIEffectEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D9E754DF168FB9D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_METHOD_2_D9E754DF168FB9D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BD35E0748722E7E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_METHOD_2_BD35E0748722E7E6_OFFSET))(a1, a2);
		}
	};
}
