#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_1F813F85CC33CD02_OFFSET UNITYSDK_OFFSET(0x1D4E3E10)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_9EA66BE71A253483_OFFSET UNITYSDK_OFFSET(0x1D4E3E60)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E3E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetProgress_TypeDefinitionIndex = 22917;

	class SetBattleTargetProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F813F85CC33CD02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_1F813F85CC33CD02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EA66BE71A253483(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_9EA66BE71A253483_OFFSET))(a1, a2);
		}
	};
}
