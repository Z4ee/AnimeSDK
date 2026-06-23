#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_08FFAF9759A4ED46_2;
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x785760)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceDownloadDialogPopWindowController__CalculateSize_Async_d__10_TypeDefinitionIndex = 49868;

	struct alignas(8) UISettingResourceDownloadDialogPopWindowController__CalculateSize_Async_d__10
	{
		::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* _fullPackages_5__4; // 0x10
		::Class_2_08FFAF9759A4ED46_2* picker; // 0x18
		::System::Exception* _ex_5__7; // 0x20
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter __u__2; // 0x28
		::System::Action_2<::System::Int64, ::System::Int64>* finishCallback; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x40
		::System::Object* __7__wrap1; // 0x50
		::System::Int32 __1__state; // 0x58
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x5C
		::System::Int32 __7__wrap2; // 0x60
		::System::Int64 _totalSize_5__5; // 0x68
		::System::Int64 _fullSize_5__6; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
