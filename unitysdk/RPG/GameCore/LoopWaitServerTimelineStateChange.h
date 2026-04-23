#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_B843055BDB572193_OFFSET UNITYSDK_OFFSET(0x18A7F170)
#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_BF5EB99733D81043_OFFSET UNITYSDK_OFFSET(0x18A7F200)
#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerTimelineStateChange_TypeDefinitionIndex = 21108;

	class LoopWaitServerTimelineStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B843055BDB572193(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerTimelineStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerTimelineStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_B843055BDB572193_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF5EB99733D81043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerTimelineStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerTimelineStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_BF5EB99733D81043_OFFSET))(a1, a2);
		}
	};
}
