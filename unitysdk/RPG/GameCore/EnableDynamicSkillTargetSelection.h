#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_METHOD_3_7ACBCB4E8A5B6C47_OFFSET UNITYSDK_OFFSET(0x1D062170)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_METHOD_3_9DDD37DC09AC858C_OFFSET UNITYSDK_OFFSET(0x1D0621B0)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0621A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableDynamicSkillTargetSelection_TypeDefinitionIndex = 22585;

	class EnableDynamicSkillTargetSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ACBCB4E8A5B6C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableDynamicSkillTargetSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableDynamicSkillTargetSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_METHOD_3_7ACBCB4E8A5B6C47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DDD37DC09AC858C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_METHOD_3_9DDD37DC09AC858C_OFFSET))(a1, a2);
		}
	};
}
