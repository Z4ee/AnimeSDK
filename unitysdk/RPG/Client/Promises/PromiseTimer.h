#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class PredicateWait; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define RPG_CLIENT_PROMISES_PROMISETIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x180F6750)
#define RPG_CLIENT_PROMISES_PROMISETIMER_FINDINWAITING_OFFSET UNITYSDK_OFFSET(0x180F68E0)
#define RPG_CLIENT_PROMISES_PROMISETIMER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x180F6B90)
#define RPG_CLIENT_PROMISES_PROMISETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x180F6970)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITFOR_OFFSET UNITYSDK_OFFSET(0x180F6550)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x180F6600)
#define RPG_CLIENT_PROMISES_PROMISETIMER_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x180F66B0)
#define RPG_CLIENT_PROMISES_PROMISETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x180F6C20)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseTimer_TypeDefinitionIndex = 8652;

	class PromiseTimer : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::RPG::Client::Promises::PredicateWait*>* waiting; // 0x10
		::System::Int32 curFrame; // 0x18
		::System::Single curTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WaitFor(::System::Single seconds)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITFOR_OFFSET))(this, seconds);
		}

		::RPG::Client::Promises::IPromise* WaitWhile(::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* predicate)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITWHILE_OFFSET))(this, predicate);
		}

		::RPG::Client::Promises::IPromise* WaitUntil(::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* predicate)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_WAITUNTIL_OFFSET))(this, predicate);
		}

		::System::Boolean Cancel(::RPG::Client::Promises::IPromise* promise)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_CANCEL_OFFSET))(this, promise);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* FindInWaiting(::RPG::Client::Promises::IPromise* promise)
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_FINDINWAITING_OFFSET))(this, promise);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* RemoveNode(::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>* node)
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::Promises::PredicateWait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER_REMOVENODE_OFFSET))(this, node);
		}
	};
}
