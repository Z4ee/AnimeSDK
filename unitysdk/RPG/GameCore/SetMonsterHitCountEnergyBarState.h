#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_METHOD_3_7510B2583B39E6DD_OFFSET UNITYSDK_OFFSET(0x19C57F00)
#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_METHOD_3_8DBABA4FD0492153_OFFSET UNITYSDK_OFFSET(0x19C57FE0)
#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C57F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHitCountEnergyBarState_TypeDefinitionIndex = 22362;

	class SetMonsterHitCountEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x28
		::RPG::GameCore::DynamicFloat* PastCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7510B2583B39E6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_METHOD_3_7510B2583B39E6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DBABA4FD0492153(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_METHOD_3_8DBABA4FD0492153_OFFSET))(a1, a2);
		}
	};
}
