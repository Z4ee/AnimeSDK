#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_412;
class Class_1_F44F35AB58994EE2;
class Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_F44F35AB58994EE2__RUN_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C534C0)
#define CLASS_1_F44F35AB58994EE2__RUN_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_1_F44F35AB58994EE2__Run_d__12_TypeDefinitionIndex = 44172;

struct alignas(8) Class_1_F44F35AB58994EE2__Run_d__12
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
	::System::Threading::CancellationToken cancellationToken; // 0x20
	::Class_1_F44F35AB58994EE2* __4__this; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
	::Class_0_16E4307DCC419505_412* stageStep; // 0x40
	::System::Threading::CancellationTokenRegistration _cancellationRegistration_5__3; // 0x48
	::System::Object* owner; // 0x60
	::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8* _activeStageStep_5__2; // 0x68
	::System::Int32 __1__state; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2__RUN_D__12_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2__RUN_D__12_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
