#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_672E2314677DD402_OFFSET UNITYSDK_OFFSET(0x1D40E500)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_AC97774FB7ADC773_OFFSET UNITYSDK_OFFSET(0x1D40E540)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillReadyState_TypeDefinitionIndex = 22582;

	class OverrideSkillReadyState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::System::String* ReadyState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_672E2314677DD402(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_672E2314677DD402_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC97774FB7ADC773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_AC97774FB7ADC773_OFFSET))(a1, a2);
		}
	};
}
