#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_7055AEF32CDA9B26_OFFSET UNITYSDK_OFFSET(0x1B8A2FC0)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_9925B0EB9A1D7609_OFFSET UNITYSDK_OFFSET(0x1B8A2EC0)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A2F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDynamicSkillButtonInput_TypeDefinitionIndex = 22022;

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

		static ::System::Void Method_3_9925B0EB9A1D7609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_9925B0EB9A1D7609_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7055AEF32CDA9B26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_METHOD_3_7055AEF32CDA9B26_OFFSET))(a1, a2);
		}
	};
}
