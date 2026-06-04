#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_AC97774FB7ADC773_OFFSET UNITYSDK_OFFSET(0x199DF8E0)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_B1DB9C67C4B22D60_OFFSET UNITYSDK_OFFSET(0x199DF860)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199DF8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillReadyState_TypeDefinitionIndex = 21594;

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

		static ::System::Void Method_3_B1DB9C67C4B22D60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_B1DB9C67C4B22D60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC97774FB7ADC773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_METHOD_3_AC97774FB7ADC773_OFFSET))(a1, a2);
		}
	};
}
