#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarkRecommendDiceItem; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_METHOD_3_B9C8F9A92F3DAE35_OFFSET UNITYSDK_OFFSET(0x1887C8F0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_METHOD_3_E0B6A2FC5DBD141E_OFFSET UNITYSDK_OFFSET(0x18877A10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x188779C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkRecommendDiceEX_TypeDefinitionIndex = 15324;

	class DiceCombatTaskConfig_MarkRecommendDiceEX : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarkRecommendDiceItem*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9C8F9A92F3DAE35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_METHOD_3_B9C8F9A92F3DAE35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0B6A2FC5DBD141E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_METHOD_3_E0B6A2FC5DBD141E_OFFSET))(a1, a2);
		}
	};
}
