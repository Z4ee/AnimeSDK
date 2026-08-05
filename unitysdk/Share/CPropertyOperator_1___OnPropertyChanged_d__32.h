#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace Share { template <typename T> class CPropertyOperator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_0_16E4307DCC41950C;

namespace Share
{
	inline static constexpr unsigned int CPropertyOperator_1___OnPropertyChanged_d__32_TypeDefinitionIndex = 16869;

	template <typename T>
	struct CPropertyOperator_1___OnPropertyChanged_d__32
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x0
		::Class_0_16E4307DCC41950C<T>* oPropertyTemplate; // 0x0
		::System::Boolean bExecCallback; // 0x0
		::Share::CPropertyOperator_1<T>* __4__this; // 0x0
		::System::Int32 dwPrevValue; // 0x0
		::System::Int32 dwCurValue; // 0x0
		::System::Boolean bRefreshRelatedProperty; // 0x0
	};
}
