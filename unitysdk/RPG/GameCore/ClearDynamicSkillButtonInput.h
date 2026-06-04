#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_05E1BC3BDE7F0DF7_OFFSET UNITYSDK_OFFSET(0x19652A10)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_1F8519E230B51546_OFFSET UNITYSDK_OFFSET(0x19652990)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x196529E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDynamicSkillButtonInput_TypeDefinitionIndex = 21602;

	class ClearDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F8519E230B51546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_1F8519E230B51546_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05E1BC3BDE7F0DF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_METHOD_3_05E1BC3BDE7F0DF7_OFFSET))(a1, a2);
		}
	};
}
