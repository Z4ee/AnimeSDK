#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase.h"

namespace System { class Action; }

#define SGF_SEVENT_SIGNAL_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1C011BA0)
#define SGF_SEVENT_SIGNAL_INVOKESAFE_OFFSET UNITYSDK_OFFSET(0x1C012040)
#define SGF_SEVENT_SIGNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C011CE0)
#define SGF_SEVENT_SIGNAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C011B10)
#define SGF_SEVENT_SIGNAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C011C00)
#define SGF_SEVENT_SIGNAL_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1C011C90)
#define SGF_SEVENT_SIGNAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0123C0)
#define SGF_SEVENT_SIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0123B0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int Signal_TypeDefinitionIndex = 8107;

	class Signal : public ::SGF::SEvent::SignalBase
	{
	public:
		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL__CTOR_1_OFFSET))(this);
		}

		static ::SGF::SEvent::Signal* op_Addition(::SGF::SEvent::Signal* p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::Signal*(*)(::SGF::SEvent::Signal*, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_OP_ADDITION_OFFSET))(p1, p2);
		}

		static ::SGF::SEvent::Signal* op_Subtraction(::SGF::SEvent::Signal* p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::Signal*(*)(::SGF::SEvent::Signal*, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_OP_SUBTRACTION_OFFSET))(p1, p2);
		}

		::System::Void AddListener(::System::Action* a, ::System::Boolean bInsertAtFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_ADDLISTENER_OFFSET))(this, a, bInsertAtFirst);
		}

		::System::Void RemoveListener(::System::Action* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_REMOVELISTENER_OFFSET))(this, a);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_INVOKE_OFFSET))(this);
		}

		::System::Void InvokeSafe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNAL_INVOKESAFE_OFFSET))(this);
		}
	};
}
