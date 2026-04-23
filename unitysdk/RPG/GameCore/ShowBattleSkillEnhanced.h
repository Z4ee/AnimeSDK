#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED_METHOD_3_79F21717C46CAB7A_OFFSET UNITYSDK_OFFSET(0x18E59AD0)
#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED_METHOD_3_AA9B7CF92C3EE14D_OFFSET UNITYSDK_OFFSET(0x18E59A40)
#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED__CTOR_OFFSET UNITYSDK_OFFSET(0x18E59AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleSkillEnhanced_TypeDefinitionIndex = 21839;

	class ShowBattleSkillEnhanced : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Int32 ChildSkillIndex; // 0x24
		::System::Boolean IsShow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA9B7CF92C3EE14D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleSkillEnhanced*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleSkillEnhanced*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED_METHOD_3_AA9B7CF92C3EE14D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79F21717C46CAB7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleSkillEnhanced* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleSkillEnhanced*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED_METHOD_3_79F21717C46CAB7A_OFFSET))(a1, a2);
		}
	};
}
