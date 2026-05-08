#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBaseEx.h"

namespace System { class Action; }

#define SGF_SEVENT_SIGNALEX_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1BE5AC50)
#define SGF_SEVENT_SIGNALEX_INVOKESAFE_OFFSET UNITYSDK_OFFSET(0x1BE5AFC0)
#define SGF_SEVENT_SIGNALEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE5AE30)
#define SGF_SEVENT_SIGNALEX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE5AA40)
#define SGF_SEVENT_SIGNALEX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BE5AB50)
#define SGF_SEVENT_SIGNALEX_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1BE5AD40)
#define SGF_SEVENT_SIGNALEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE5B1B0)
#define SGF_SEVENT_SIGNALEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5B1A0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalEx_TypeDefinitionIndex = 7731;

	class SignalEx : public ::SGF::SEvent::SignalBaseEx
	{
	public:
		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX__CTOR_1_OFFSET))(this);
		}

		static ::SGF::SEvent::SignalEx* op_Addition(::SGF::SEvent::SignalEx* p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::SignalEx*(*)(::SGF::SEvent::SignalEx*, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_OP_ADDITION_OFFSET))(p1, p2);
		}

		static ::SGF::SEvent::SignalEx* op_Subtraction(::SGF::SEvent::SignalEx* p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::SignalEx*(*)(::SGF::SEvent::SignalEx*, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_OP_SUBTRACTION_OFFSET))(p1, p2);
		}

		::System::Void AddListener(::System::Action* a, ::System::Boolean bInsertAtFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_ADDLISTENER_OFFSET))(this, a, bInsertAtFirst);
		}

		::System::Void RemoveListener(::System::Action* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_REMOVELISTENER_OFFSET))(this, a);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_INVOKE_OFFSET))(this);
		}

		::System::Void InvokeSafe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEX_INVOKESAFE_OFFSET))(this);
		}
	};
}
