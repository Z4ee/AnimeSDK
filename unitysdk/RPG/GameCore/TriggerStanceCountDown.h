#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_86F75E18E8D0FAA1_OFFSET UNITYSDK_OFFSET(0x1D29A050)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_E4204B69FF73B314_OFFSET UNITYSDK_OFFSET(0x1D29A000)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29A040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerStanceCountDown_TypeDefinitionIndex = 22462;

	class TriggerStanceCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IncludeRedStance; // 0x22
		::System::Boolean IgnoreMuteBreak; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4204B69FF73B314(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerStanceCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerStanceCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_E4204B69FF73B314_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86F75E18E8D0FAA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_METHOD_3_86F75E18E8D0FAA1_OFFSET))(a1, a2);
		}
	};
}
