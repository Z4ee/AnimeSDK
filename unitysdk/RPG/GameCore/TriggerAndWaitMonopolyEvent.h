#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_METHOD_3_198030574036F7F1_OFFSET UNITYSDK_OFFSET(0x190BC750)
#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_METHOD_3_C432F0BFFE67D398_OFFSET UNITYSDK_OFFSET(0x190BC6D0)
#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190BC720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAndWaitMonopolyEvent_TypeDefinitionIndex = 20572;

	class TriggerAndWaitMonopolyEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsGroudFloor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C432F0BFFE67D398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_METHOD_3_C432F0BFFE67D398_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_198030574036F7F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_METHOD_3_198030574036F7F1_OFFSET))(a1, a2);
		}
	};
}
