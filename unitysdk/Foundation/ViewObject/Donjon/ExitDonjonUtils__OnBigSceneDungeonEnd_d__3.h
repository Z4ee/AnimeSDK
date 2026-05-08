#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_4;
class Class_3_733B560439A4DEF8;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x692280)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils__OnBigSceneDungeonEnd_d__3_TypeDefinitionIndex = 67965;

	struct alignas(8) ExitDonjonUtils__OnBigSceneDungeonEnd_d__3
	{
		::System::Threading::CancellationToken ct; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::System::Action* onResultContextPrepared; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* ntfs; // 0x30
		::Class_3_733B560439A4DEF8* _context_5__2; // 0x38
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x40
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__3_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
