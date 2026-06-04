#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_7055AEF32CDA9B26_OFFSET UNITYSDK_OFFSET(0x19E540C0)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_A18E7F8B96040AAA_OFFSET UNITYSDK_OFFSET(0x19E53FA0)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E54040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDynamicSkillButtonInput_TypeDefinitionIndex = 21600;

	class WaitDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18
		::RPG::GameCore::SkillInputType InputType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::RPG::GameCore::DynamicFloat* MaxWaitTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A18E7F8B96040AAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_A18E7F8B96040AAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7055AEF32CDA9B26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_7055AEF32CDA9B26_OFFSET))(a1, a2);
		}
	};
}
