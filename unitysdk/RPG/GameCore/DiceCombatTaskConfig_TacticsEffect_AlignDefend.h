#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND_METHOD_3_CC9FAE086139B1F9_OFFSET UNITYSDK_OFFSET(0x1D0377C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND_METHOD_3_CD6AE73F0B2B3CA4_OFFSET UNITYSDK_OFFSET(0x1D037720)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0377B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TacticsEffect_AlignDefend_TypeDefinitionIndex = 15989;

	class DiceCombatTaskConfig_TacticsEffect_AlignDefend : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD6AE73F0B2B3CA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND_METHOD_3_CD6AE73F0B2B3CA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC9FAE086139B1F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNDEFEND_METHOD_3_CC9FAE086139B1F9_OFFSET))(a1, a2);
		}
	};
}
