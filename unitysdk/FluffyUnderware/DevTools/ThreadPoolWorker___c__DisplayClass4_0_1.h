#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class WaitCallback; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ThreadPoolWorker___c__DisplayClass4_0_1_TypeDefinitionIndex = 25885;

	template <typename T>
	class ThreadPoolWorker___c__DisplayClass4_0_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* action; // 0x0
		::System::Int32 iterationsCount; // 0x0
		::System::Action_3<T, ::System::Int32, ::System::Int32>* __9__0; // 0x0
		::System::Threading::WaitCallback* __9__1; // 0x0
	};
}
