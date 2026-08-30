#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_05E1BC3BDE7F0DF7_OFFSET UNITYSDK_OFFSET(0x1CFDA070)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_803CAB716B3399BC_OFFSET UNITYSDK_OFFSET(0x1CFDA030)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDA060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDynamicSkillButtonInput_TypeDefinitionIndex = 22591;

	class ClearDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_803CAB716B3399BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_803CAB716B3399BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05E1BC3BDE7F0DF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_05E1BC3BDE7F0DF7_OFFSET))(a1, a2);
		}
	};
}
