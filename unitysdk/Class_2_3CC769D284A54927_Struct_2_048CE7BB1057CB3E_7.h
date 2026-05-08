#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_910;
class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x779DB0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7_TypeDefinitionIndex = 61328;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7
{
	::Class_2_208CC9941471731A_910* Field_2_6; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_15; // 0x18
	::UnityEngine::Animator* Field_2_5; // 0x20
	::UnityEngine::AnimationCurve* Field_2_18; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_19; // 0x30
	::Class_2_3CC769D284A54927* Field_2_4; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x48
	::System::Boolean Field_2_13; // 0x58
	::System::Boolean Field_2_14; // 0x59
	::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04 Field_2_3; // 0x5C
	::System::Single Field_2_17; // 0x60
	::System::Single Field_2_12; // 0x64
	::System::Single Field_2_10; // 0x68
	::System::Single Field_2_7; // 0x6C
	::System::Int32 Field_2_0; // 0x70
	::System::Int32 Field_2_2; // 0x74
	::System::Single Field_2_9; // 0x78
	::System::Single Field_2_16; // 0x7C
	::System::Single Field_2_8; // 0x80
	::System::Single Field_2_11; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
