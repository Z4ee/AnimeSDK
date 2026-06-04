#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERBREAK_METHOD_3_2A174A0DEDEBF1B1_OFFSET UNITYSDK_OFFSET(0x19E094C0)
#define RPG_GAMECORE_TRIGGERBREAK_METHOD_3_C5210B5A7832D7DD_OFFSET UNITYSDK_OFFSET(0x19E09430)
#define RPG_GAMECORE_TRIGGERBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E09490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBreak_TypeDefinitionIndex = 21477;

	class TriggerBreak : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5210B5A7832D7DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_METHOD_3_C5210B5A7832D7DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A174A0DEDEBF1B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_METHOD_3_2A174A0DEDEBF1B1_OFFSET))(a1, a2);
		}
	};
}
