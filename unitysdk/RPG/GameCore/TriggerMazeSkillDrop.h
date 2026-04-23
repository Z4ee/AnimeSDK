#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMAZESKILLDROP_METHOD_3_A8FF22884C4E9AE5_OFFSET UNITYSDK_OFFSET(0x190C8550)
#define RPG_GAMECORE_TRIGGERMAZESKILLDROP_METHOD_3_E408C7E05ECBF60A_OFFSET UNITYSDK_OFFSET(0x190C85C0)
#define RPG_GAMECORE_TRIGGERMAZESKILLDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x190C8590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeSkillDrop_TypeDefinitionIndex = 20603;

	class TriggerMazeSkillDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8FF22884C4E9AE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeSkillDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP_METHOD_3_A8FF22884C4E9AE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E408C7E05ECBF60A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeSkillDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP_METHOD_3_E408C7E05ECBF60A_OFFSET))(a1, a2);
		}
	};
}
