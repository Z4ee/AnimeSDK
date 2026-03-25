#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_09B07B68B696034A_OFFSET UNITYSDK_OFFSET(0x16FFEA60)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET UNITYSDK_OFFSET(0x16FFEB30)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFEAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLastBattleSkillDrop_TypeDefinitionIndex = 19930;

	class ByCheckLastBattleSkillDrop : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09B07B68B696034A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_09B07B68B696034A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_738B6B88F908F570(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET))(a1, a2);
		}
	};
}
