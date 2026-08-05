#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SGF::SEvent { class SignalBaseEx; }
namespace System { class Action; }
namespace System { class Delegate; }

#define SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x1F0AB050)
#define SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_2_OFFSET UNITYSDK_OFFSET(0x1F0AB150)
#define SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1F0AAFF0)
#define SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1F0AB2B0)
#define SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_2_OFFSET UNITYSDK_OFFSET(0x1F0AB3B0)
#define SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1F0AB250)
#define SGF_SEVENT_SIGNALEXWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalExWrapper_TypeDefinitionIndex = 7823;

	struct alignas(8) SignalExWrapper
	{
		::SGF::SEvent::SignalBaseEx* _signalBase; // 0x10

		::System::Void _ctor(::SGF::SEvent::SignalBaseEx* signalBase)
		{
			return ((::System::Void(*)(::PVOID, ::SGF::SEvent::SignalBaseEx*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER__CTOR_OFFSET))(this, signalBase);
		}

		/*
		static ::SGF::SEvent::SignalExWrapper op_Addition(::SGF::SEvent::SignalExWrapper p1, ::SGF::SEvent::DelegateEx& p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_OFFSET))(p1, p2);
		}
		*/

		static ::SGF::SEvent::SignalExWrapper op_Addition_1(::SGF::SEvent::SignalExWrapper p1, ::System::Delegate* p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_1_OFFSET))(p1, p2);
		}

		static ::SGF::SEvent::SignalExWrapper op_Addition_2(::SGF::SEvent::SignalExWrapper p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_ADDITION_2_OFFSET))(p1, p2);
		}

		/*
		static ::SGF::SEvent::SignalExWrapper op_Subtraction(::SGF::SEvent::SignalExWrapper p1, ::SGF::SEvent::DelegateEx& p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_OFFSET))(p1, p2);
		}
		*/

		static ::SGF::SEvent::SignalExWrapper op_Subtraction_1(::SGF::SEvent::SignalExWrapper p1, ::System::Delegate* p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_1_OFFSET))(p1, p2);
		}

		static ::SGF::SEvent::SignalExWrapper op_Subtraction_2(::SGF::SEvent::SignalExWrapper p1, ::System::Action* p2)
		{
			return ((::SGF::SEvent::SignalExWrapper(*)(::SGF::SEvent::SignalExWrapper, ::System::Action*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALEXWRAPPER_OP_SUBTRACTION_2_OFFSET))(p1, p2);
		}
	};
}
