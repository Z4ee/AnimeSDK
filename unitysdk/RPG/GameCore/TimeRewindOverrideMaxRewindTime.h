#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_A53F26A156097A5B_OFFSET UNITYSDK_OFFSET(0x1D528EC0)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_EC45CCA3915C2292_OFFSET UNITYSDK_OFFSET(0x1D528F00)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D528EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverrideMaxRewindTime_TypeDefinitionIndex = 20429;

	class TimeRewindOverrideMaxRewindTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* MaxRewindTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A53F26A156097A5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_A53F26A156097A5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC45CCA3915C2292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_EC45CCA3915C2292_OFFSET))(a1, a2);
		}
	};
}
