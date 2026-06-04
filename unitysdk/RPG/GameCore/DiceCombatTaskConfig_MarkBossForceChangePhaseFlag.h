#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_METHOD_3_035DEA46543EE65A_OFFSET UNITYSDK_OFFSET(0x196B95C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_METHOD_3_D7FE6DEC532465D5_OFFSET UNITYSDK_OFFSET(0x196B3B30)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x196B3AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkBossForceChangePhaseFlag_TypeDefinitionIndex = 15305;

	class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_035DEA46543EE65A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_METHOD_3_035DEA46543EE65A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7FE6DEC532465D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_METHOD_3_D7FE6DEC532465D5_OFFSET))(a1, a2);
		}
	};
}
