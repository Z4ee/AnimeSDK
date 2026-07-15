#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0x16C25200)
#define RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x16C255C0)
#define RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C25110)
#define RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C250B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReadMessageThread_MsgDispatcher_TypeDefinitionIndex = 36360;

	class ReadMessageThread_MsgDispatcher : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Action*>* _callbacks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_CLEAR_OFFSET))(this);
		}

		::System::Void Enqueue(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_ENQUEUE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_MSGDISPATCHER_UPDATE_OFFSET))(this);
		}
	};
}
