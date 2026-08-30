#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTEMONSTERLASTKILL_METHOD_3_3531F65AE96C84C3_OFFSET UNITYSDK_OFFSET(0x1CE86850)
#define RPG_GAMECORE_MUTEMONSTERLASTKILL_METHOD_3_E467C1132D308DB0_OFFSET UNITYSDK_OFFSET(0x1CE86810)
#define RPG_GAMECORE_MUTEMONSTERLASTKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE86840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteMonsterLastKill_TypeDefinitionIndex = 23212;

	class MuteMonsterLastKill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E467C1132D308DB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteMonsterLastKill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteMonsterLastKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL_METHOD_3_E467C1132D308DB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3531F65AE96C84C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteMonsterLastKill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteMonsterLastKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL_METHOD_3_3531F65AE96C84C3_OFFSET))(a1, a2);
		}
	};
}
