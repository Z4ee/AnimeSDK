#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DISABLEBATTLETARGET_METHOD_3_1FEF9B27704D216D_OFFSET UNITYSDK_OFFSET(0x1BB18230)
#define RPG_GAMECORE_DISABLEBATTLETARGET_METHOD_3_D6A6DA0560FA8C4E_OFFSET UNITYSDK_OFFSET(0x1BB18270)
#define RPG_GAMECORE_DISABLEBATTLETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB18260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableBattleTarget_TypeDefinitionIndex = 22812;

	class DisableBattleTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FEF9B27704D216D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableBattleTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableBattleTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET_METHOD_3_1FEF9B27704D216D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6A6DA0560FA8C4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableBattleTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET_METHOD_3_D6A6DA0560FA8C4E_OFFSET))(a1, a2);
		}
	};
}
