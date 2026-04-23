#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_METHOD_3_0C94945F7FE712FA_OFFSET UNITYSDK_OFFSET(0x190C9630)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_METHOD_3_6204A0C740352CCE_OFFSET UNITYSDK_OFFSET(0x190C9520)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x190C9600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseAction_TypeDefinitionIndex = 18952;

	class TriggerPamActionPhaseAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6204A0C740352CCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_METHOD_3_6204A0C740352CCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C94945F7FE712FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_METHOD_3_0C94945F7FE712FA_OFFSET))(a1, a2);
		}
	};
}
