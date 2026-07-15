#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_5E3B2DB1FAB6A43F_OFFSET UNITYSDK_OFFSET(0x1BCD4EE0)
#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_BF5EB99733D81043_OFFSET UNITYSDK_OFFSET(0x1BCD4F30)
#define RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD4F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerTimelineStateChange_TypeDefinitionIndex = 21426;

	class LoopWaitServerTimelineStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E3B2DB1FAB6A43F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerTimelineStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerTimelineStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_5E3B2DB1FAB6A43F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF5EB99733D81043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerTimelineStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerTimelineStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERTIMELINESTATECHANGE_METHOD_3_BF5EB99733D81043_OFFSET))(a1, a2);
		}
	};
}
