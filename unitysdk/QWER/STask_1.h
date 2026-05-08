#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace QWER
{
	inline static constexpr unsigned int STask_1_TypeDefinitionIndex = 85866;

	template <typename T>
	struct STask_1
	{
		::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::System::Exception*, T>>* m_oInnerTask; // 0x0
		::System::Action_2<::System::Exception*, T>* _Action_k__BackingField; // 0x0
	};
}
