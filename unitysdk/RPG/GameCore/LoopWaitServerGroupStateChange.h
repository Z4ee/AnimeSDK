#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_13442E33135309E0_OFFSET UNITYSDK_OFFSET(0x17371320)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_289B47E6DDBE6397_OFFSET UNITYSDK_OFFSET(0x17371390)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17371360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupStateChange_TypeDefinitionIndex = 19478;

	class LoopWaitServerGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13442E33135309E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_13442E33135309E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_289B47E6DDBE6397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_METHOD_3_289B47E6DDBE6397_OFFSET))(a1, a2);
		}
	};
}
