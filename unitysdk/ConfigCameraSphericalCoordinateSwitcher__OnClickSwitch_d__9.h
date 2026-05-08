#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7938F0)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher__OnClickSwitch_d__9_TypeDefinitionIndex = 43697;

struct alignas(8) ConfigCameraSphericalCoordinateSwitcher__OnClickSwitch_d__9
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
	::System::Int32 __1__state; // 0x18

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
