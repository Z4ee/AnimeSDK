#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_METHOD_3_F03DC8D259D9A2FE_OFFSET UNITYSDK_OFFSET(0x18C7E350)
#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_METHOD_3_F98420EACE63A7EA_OFFSET UNITYSDK_OFFSET(0x18C7E460)
#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PumanHuntTriggerEscapeEvent_TypeDefinitionIndex = 19169;

	class PumanHuntTriggerEscapeEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F03DC8D259D9A2FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_METHOD_3_F03DC8D259D9A2FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F98420EACE63A7EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_METHOD_3_F98420EACE63A7EA_OFFSET))(a1, a2);
		}
	};
}
