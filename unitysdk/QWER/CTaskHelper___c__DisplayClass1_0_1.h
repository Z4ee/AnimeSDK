#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Exception; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper___c__DisplayClass1_0_1_TypeDefinitionIndex = 85870;

	template <typename T>
	class CTaskHelper___c__DisplayClass1_0_1 : public ::System::Object
	{
	public:
		::System::Exception* oException; // 0x0
		T oData; // 0x0
		::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::System::Exception*, T>>* oTask; // 0x0
	};
}
