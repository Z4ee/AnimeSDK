#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class HueAndSaturationGroup;
class NumberBlinkConfig;
namespace MoleMole { class UIHollowChessboardResult3DModelController_NumberBlinker; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__NUMBERBLINK_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79B4D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__NUMBERBLINK_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_NumberBlinker__NumberBlink_d__7_TypeDefinitionIndex = 39436;

	struct alignas(8) UIHollowChessboardResult3DModelController_NumberBlinker__NumberBlink_d__7
	{
		::MoleMole::UIHollowChessboardResult3DModelController_NumberBlinker* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::NumberBlinkConfig* configNumberBlinkConfig; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::HueAndSaturationGroup* _leftGroup_5__8; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x40
		::HueAndSaturationGroup* _rightGroup_5__9; // 0x50
		::System::Single _curTime_5__3; // 0x58
		::System::Int32 __1__state; // 0x5C
		::System::Single _curPrefabTime_5__4; // 0x60
		::System::Int32 _lastChangeHueCount_5__7; // 0x64
		::System::Int32 _lastRightCache_5__6; // 0x68
		::System::Int32 _lastLeftCache_5__5; // 0x6C
		::System::Single _totalTime_5__2; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__NUMBERBLINK_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__NUMBERBLINK_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
