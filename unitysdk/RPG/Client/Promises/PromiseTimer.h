#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class PredicateWait; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define RPG_CLIENT_PROMISES_PROMISETIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x1C65E670)
#define RPG_CLIENT_PROMISES_PROMISETIMER_FINDINWAITING_OFFSET UNITYSDK_OFFSET(0x1C65E860)
#define RPG_CLIENT_PROMISES_PROMISETIMER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1C65EB20)
#define RPG_CLIENT_PROMISES_PROMISETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C65E8F0)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITFOR_OFFSET UNITYSDK_OFFSET(0x1C65E450)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x1C65E510)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x1C65E5C0)
#define RPG_CLIENT_PROMISES_PROMISETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65EBB0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseTimer_TypeDefinitionIndex = 9846;

	class PromiseTimer : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::RPG::Client::Promises::PredicateWait*>* waiting; // 0x10
		::System::Single curTime; // 0x18
		::System::Int32 curFrame; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WaitFor(::System::Single a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITFOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* WaitWhile(::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITWHILE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* WaitUntil(::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITUNTIL_OFFSET))(this, a1);
		}

		::System::Boolean Cancel(::RPG::Client::Promises::IPromise* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_CANCEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* FindInWaiting(::RPG::Client::Promises::IPromise* a1)
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_FINDINWAITING_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* RemoveNode(::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* a1)
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_REMOVENODE_OFFSET))(this, a1);
		}
	};
}
