#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_METHOD_2_0A7C339D22642404_OFFSET UNITYSDK_OFFSET(0x18870EC0)
#define RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18870FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillAIEffectConfig_TypeDefinitionIndex = 15291;

	class DiceCombatSkillAIEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Effects; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0A7C339D22642404(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatSkillAIEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatSkillAIEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_METHOD_2_0A7C339D22642404_OFFSET))(a1, a2);
		}
	};
}
