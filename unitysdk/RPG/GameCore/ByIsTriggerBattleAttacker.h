#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_43B1D0D2F142CF02_OFFSET UNITYSDK_OFFSET(0x18759CD0)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_E35D57396C2B417C_OFFSET UNITYSDK_OFFSET(0x18759C00)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18759C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTriggerBattleAttacker_TypeDefinitionIndex = 19767;

	class ByIsTriggerBattleAttacker : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E35D57396C2B417C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_E35D57396C2B417C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43B1D0D2F142CF02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_43B1D0D2F142CF02_OFFSET))(a1, a2);
		}
	};
}
