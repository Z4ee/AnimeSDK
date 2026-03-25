#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_METHOD_3_801384CF7852BC53_OFFSET UNITYSDK_OFFSET(0x17170360)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_METHOD_3_F4D2952B3E22E36B_OFFSET UNITYSDK_OFFSET(0x1716BCB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1716BC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint_TypeDefinitionIndex = 14737;

	class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Point; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_801384CF7852BC53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_METHOD_3_801384CF7852BC53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4D2952B3E22E36B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_METHOD_3_F4D2952B3E22E36B_OFFSET))(a1, a2);
		}
	};
}
