#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks { class ExceptionHolder; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSource_1_TypeDefinitionIndex = 31909;

	template <typename T>
	class UniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T result; // 0x0
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x0
		::System::Object* gate; // 0x0
		::System::Action_1<::System::Object*>* singleContinuation; // 0x0
		::System::Object* singleState; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*, ::System::Object*>>* secondaryContinuationList; // 0x0
		::System::Int32 intStatus; // 0x0
		::System::Boolean handled; // 0x0
	};
}
