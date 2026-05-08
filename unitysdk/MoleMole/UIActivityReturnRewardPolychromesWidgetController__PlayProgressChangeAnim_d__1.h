#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_6055A71771138631_Class_2_DCA97181A2D1354C;
namespace MoleMole { class UIActivityReturnRewardPolychromesWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIACTIVITYRETURNREWARDPOLYCHROMESWIDGETCONTROLLER__PLAYPROGRESSCHANGEANIM_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79EFF0)
#define MOLEMOLE_UIACTIVITYRETURNREWARDPOLYCHROMESWIDGETCONTROLLER__PLAYPROGRESSCHANGEANIM_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnRewardPolychromesWidgetController__PlayProgressChangeAnim_d__1_TypeDefinitionIndex = 57148;

	struct alignas(8) UIActivityReturnRewardPolychromesWidgetController__PlayProgressChangeAnim_d__1
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIActivityReturnRewardPolychromesWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::UnityEngine::AnimationCurve* _curve_5__4; // 0x38
		::Class_2_6055A71771138631_Class_2_DCA97181A2D1354C* _finalView_5__3; // 0x40
		::System::Single _maxLimit_5__6; // 0x48
		::System::Single _totalTime_5__5; // 0x4C
		::System::Single _passTime_5__2; // 0x50
		::System::UInt32 targetNum; // 0x54
		::System::Int32 __1__state; // 0x58
		::System::UInt32 _oriNum_5__7; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNREWARDPOLYCHROMESWIDGETCONTROLLER__PLAYPROGRESSCHANGEANIM_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNREWARDPOLYCHROMESWIDGETCONTROLLER__PLAYPROGRESSCHANGEANIM_D__1_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
