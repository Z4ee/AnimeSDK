#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TEAMLEADERRUNNING_METHOD_3_043C0ED3FDDCB3C1_OFFSET UNITYSDK_OFFSET(0x17887A30)
#define RPG_GAMECORE_TEAMLEADERRUNNING_METHOD_3_87329BE787B6885A_OFFSET UNITYSDK_OFFSET(0x17895DC0)
#define RPG_GAMECORE_TEAMLEADERRUNNING__CTOR_OFFSET UNITYSDK_OFFSET(0x17887A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLeaderRunning_TypeDefinitionIndex = 19273;

	class TeamLeaderRunning : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single RunningTime; // 0x18
		::RPG::GameCore::DynamicString* StartStr; // 0x20
		::RPG::GameCore::DynamicString* ResetAndStopStr; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeSatisfied; // 0x30
		::System::Boolean IsLoop; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87329BE787B6885A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamLeaderRunning*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLeaderRunning*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING_METHOD_3_87329BE787B6885A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_043C0ED3FDDCB3C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamLeaderRunning* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLeaderRunning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING_METHOD_3_043C0ED3FDDCB3C1_OFFSET))(a1, a2);
		}
	};
}
