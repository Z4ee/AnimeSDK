#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_54D88A3432B70A78_OFFSET UNITYSDK_OFFSET(0x18B77790)
#define RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_58A07545469F2B7A_OFFSET UNITYSDK_OFFSET(0x18B77810)
#define RPG_GAMECORE_MUTETARGETTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B777E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteTargetTimeSlow_TypeDefinitionIndex = 22823;

	class MuteTargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsMute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54D88A3432B70A78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteTargetTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteTargetTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_54D88A3432B70A78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58A07545469F2B7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_58A07545469F2B7A_OFFSET))(a1, a2);
		}
	};
}
