#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_289B47E6DDBE6397_OFFSET UNITYSDK_OFFSET(0x1D216070)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_B424284CB269924A_OFFSET UNITYSDK_OFFSET(0x1D216030)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D216060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupStateChange_TypeDefinitionIndex = 20934;

	class LoopWaitServerGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B424284CB269924A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_B424284CB269924A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_289B47E6DDBE6397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_289B47E6DDBE6397_OFFSET))(a1, a2);
		}
	};
}
