#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_34;
class Class_3_568600B6F5743120;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8772D0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils__OnBigSceneDungeonEnd_d__4_TypeDefinitionIndex = 69990;

	struct alignas(8) ExitDonjonUtils__OnBigSceneDungeonEnd_d__4
	{
		::System::Threading::CancellationToken ct; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Class_3_568600B6F5743120* _context_5__2; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Action* onResultContextPrepared; // 0x40
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* ntfs; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Boolean success; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
