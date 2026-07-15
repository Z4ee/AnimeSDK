#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_Event.h"

namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }
namespace System { class String; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_METHOD_2_8F8BE647E074B8CB_OFFSET UNITYSDK_OFFSET(0x180756F0)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18075800)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_TriggerSound_TypeDefinitionIndex = 65475;

	class MonoAnimatorStateSimpleEvent_Event_TriggerSound : public ::RPG::Client::MonoAnimatorStateSimpleEvent_Event
	{
	public:
		::System::String* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_8F8BE647E074B8CB(::RPG::Client::MonoAnimatorStateSimpleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_METHOD_2_8F8BE647E074B8CB_OFFSET))(this, a1);
		}
	};
}
