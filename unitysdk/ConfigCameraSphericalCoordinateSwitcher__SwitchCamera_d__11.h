#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__SWITCHCAMERA_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BFA60)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__SWITCHCAMERA_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher__SwitchCamera_d__11_TypeDefinitionIndex = 43696;

struct alignas(8) ConfigCameraSphericalCoordinateSwitcher__SwitchCamera_d__11
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
	::System::Int32 __1__state; // 0x20

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__SWITCHCAMERA_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__SWITCHCAMERA_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
