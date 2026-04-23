#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_5C0707B86D95BEEE_OFFSET UNITYSDK_OFFSET(0x18811280)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_BDFB4BBC338D755D_OFFSET UNITYSDK_OFFSET(0x18811200)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18811250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDynamicSkillButtonInput_TypeDefinitionIndex = 21761;

	class ClearDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDFB4BBC338D755D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_BDFB4BBC338D755D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C0707B86D95BEEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_5C0707B86D95BEEE_OFFSET))(a1, a2);
		}
	};
}
