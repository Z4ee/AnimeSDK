#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ConfigCameraSphericalCoordinateSwitcher;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__WAITUNTILTIMECURSOR_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x831AF0)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__WAITUNTILTIMECURSOR_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher__WaitUntilTimeCursor_d__13_TypeDefinitionIndex = 57834;

struct alignas(8) ConfigCameraSphericalCoordinateSwitcher__WaitUntilTimeCursor_d__13
{
	::System::Threading::CancellationToken token; // 0x10
	::ConfigCameraSphericalCoordinateSwitcher* __4__this; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
	::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x40
	::System::Int32 __1__state; // 0x44
	::System::Single resumeTime; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__WAITUNTILTIMECURSOR_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__WAITUNTILTIMECURSOR_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
