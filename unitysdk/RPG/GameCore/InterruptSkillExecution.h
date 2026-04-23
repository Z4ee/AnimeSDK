#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_33E52BE45BB5B52B_OFFSET UNITYSDK_OFFSET(0x18A20650)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_8B7AD1C35D18250D_OFFSET UNITYSDK_OFFSET(0x18A205D0)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A20620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InterruptSkillExecution_TypeDefinitionIndex = 22076;

	class InterruptSkillExecution : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucceed; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailure; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B7AD1C35D18250D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InterruptSkillExecution*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InterruptSkillExecution*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_8B7AD1C35D18250D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_33E52BE45BB5B52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_33E52BE45BB5B52B_OFFSET))(a1, a2);
		}
	};
}
