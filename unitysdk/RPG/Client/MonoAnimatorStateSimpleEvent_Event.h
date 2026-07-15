#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x180752A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_TypeDefinitionIndex = 65473;

	class MonoAnimatorStateSimpleEvent_Event : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT__CTOR_OFFSET))(this);
		}
	};
}
