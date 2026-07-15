#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_773B7F23F6F29470_OFFSET UNITYSDK_OFFSET(0x1B060A10)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_EED7840A49DB6C25_OFFSET UNITYSDK_OFFSET(0x1B060A60)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B060A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerStanceCountDown_TypeDefinitionIndex = 21898;

	class TriggerStanceCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IncludeRedStance; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_773B7F23F6F29470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerStanceCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerStanceCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_773B7F23F6F29470_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EED7840A49DB6C25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_EED7840A49DB6C25_OFFSET))(a1, a2);
		}
	};
}
