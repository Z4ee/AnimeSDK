#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_0CAAFECD30EF1AC5_OFFSET UNITYSDK_OFFSET(0x1909C3E0)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_EC45CCA3915C2292_OFFSET UNITYSDK_OFFSET(0x1909C460)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1909C430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverrideMaxRewindTime_TypeDefinitionIndex = 19641;

	class TimeRewindOverrideMaxRewindTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* MaxRewindTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CAAFECD30EF1AC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_0CAAFECD30EF1AC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC45CCA3915C2292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_METHOD_3_EC45CCA3915C2292_OFFSET))(a1, a2);
		}
	};
}
