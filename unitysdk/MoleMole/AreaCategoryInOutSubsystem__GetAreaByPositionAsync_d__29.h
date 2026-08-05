#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/Struct_2_903FDA347BBAD2AB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730260)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem__GetAreaByPositionAsync_d__29_TypeDefinitionIndex = 68257;

	struct alignas(8) AreaCategoryInOutSubsystem__GetAreaByPositionAsync_d__29
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_903FDA347BBAD2AB> __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_903FDA347BBAD2AB> __u__1; // 0x40
		::UnityEngine::Vector3 position; // 0x68
		::System::Int32 __1__state; // 0x74
		::Enum_3_44A8FD5EE475BAE7 categoryType; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
