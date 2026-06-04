#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_6CF5C621BBB87E1A_OFFSET UNITYSDK_OFFSET(0x19C2C210)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_9EA66BE71A253483_OFFSET UNITYSDK_OFFSET(0x19C2C2A0)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2C270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetProgress_TypeDefinitionIndex = 21918;

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

		static ::System::Void Method_3_6CF5C621BBB87E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_6CF5C621BBB87E1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EA66BE71A253483(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_METHOD_3_9EA66BE71A253483_OFFSET))(a1, a2);
		}
	};
}
