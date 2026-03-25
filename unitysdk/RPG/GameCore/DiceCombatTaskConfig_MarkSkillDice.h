#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_B746A6514A324BE8_OFFSET UNITYSDK_OFFSET(0x17170DF0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_BF93F2EAFB830966_OFFSET UNITYSDK_OFFSET(0x1716D290)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1716D240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkSkillDice_TypeDefinitionIndex = 14834;

	class DiceCombatTaskConfig_MarkSkillDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnSuccess; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnFail; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B746A6514A324BE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_B746A6514A324BE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF93F2EAFB830966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_BF93F2EAFB830966_OFFSET))(a1, a2);
		}
	};
}
