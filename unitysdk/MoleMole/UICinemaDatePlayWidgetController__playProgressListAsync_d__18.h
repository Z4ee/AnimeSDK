#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A2290)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__playProgressListAsync_d__18_TypeDefinitionIndex = 66986;

	struct alignas(8) UICinemaDatePlayWidgetController__playProgressListAsync_d__18
	{
		::System::Collections::Generic::List_1<::System::Int32>* numPoints; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Single _ratio_5__3; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 _i_5__2; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
