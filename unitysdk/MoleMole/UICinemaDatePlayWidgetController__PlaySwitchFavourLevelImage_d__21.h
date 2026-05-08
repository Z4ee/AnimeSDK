#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/System/ValueType.h"

class Class_2_D0F43E2E93E0D88C_Class_2_2CB68109B13467D8_1;
namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x794610)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__PlaySwitchFavourLevelImage_d__21_TypeDefinitionIndex = 66984;

	struct alignas(8) UICinemaDatePlayWidgetController__PlaySwitchFavourLevelImage_d__21
	{
		::Class_2_D0F43E2E93E0D88C_Class_2_2CB68109B13467D8_1* _progressView_5__2; // 0x10
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x18
		::System::Threading::CancellationTokenSource* tokenSource; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x38
		::System::Boolean resetProgress; // 0x48
		::Enum_3_77ADBA378EFC2D41 favourLevel; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
