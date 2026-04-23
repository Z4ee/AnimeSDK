#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnableTriggerOpType.h"
#include "unitysdk/RPG/GameCore/AdvEnableTriggerTriggerType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENABLETRIGGER_METHOD_3_7895DA176D765DBF_OFFSET UNITYSDK_OFFSET(0x1864E7E0)
#define RPG_GAMECORE_ADVENABLETRIGGER_METHOD_3_8960230821DCA829_OFFSET UNITYSDK_OFFSET(0x1864E860)
#define RPG_GAMECORE_ADVENABLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1864E830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableTrigger_TypeDefinitionIndex = 19501;

	class AdvEnableTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20
		::RPG::GameCore::AdvEnableTriggerOpType OpType; // 0x24
		::System::String* TriggerName; // 0x28
		::RPG::GameCore::AdvEnableTriggerTriggerType TriggerType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7895DA176D765DBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER_METHOD_3_7895DA176D765DBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8960230821DCA829(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER_METHOD_3_8960230821DCA829_OFFSET))(a1, a2);
		}
	};
}
