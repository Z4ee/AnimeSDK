#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERBREAK_METHOD_3_95DFF661051ECE51_OFFSET UNITYSDK_OFFSET(0x1D5F0FD0)
#define RPG_GAMECORE_TRIGGERBREAK_METHOD_3_ABDCDE8F0DE1612C_OFFSET UNITYSDK_OFFSET(0x1D5F0F80)
#define RPG_GAMECORE_TRIGGERBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F0FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBreak_TypeDefinitionIndex = 22461;

	class TriggerBreak : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IgnoreMuteBreak; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABDCDE8F0DE1612C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_METHOD_3_ABDCDE8F0DE1612C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95DFF661051ECE51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_METHOD_3_95DFF661051ECE51_OFFSET))(a1, a2);
		}
	};
}
