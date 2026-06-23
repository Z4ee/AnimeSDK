#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82E780)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_9_TypeDefinitionIndex = 86335;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_9
{
	::MoleMole::Battle::Entity* Field_2_5; // 0x10
	::UnityEngine::AnimationCurve* Field_2_17; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_3_FFD0045B4597F294* Field_2_24; // 0x30
	::UnityEngine::AnimationCurve* Field_2_19; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_23; // 0x40
	::System::Threading::CancellationTokenSource* Field_2_14; // 0x50
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x58
	::Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C* Field_2_4; // 0x60
	::System::Single Field_2_15; // 0x68
	::System::Single Field_2_6; // 0x6C
	::System::Single Field_2_10; // 0x70
	::System::Single Field_2_7; // 0x74
	::System::Single Field_2_8; // 0x78
	::System::Boolean Field_2_22; // 0x7C
	::System::Boolean Field_2_13; // 0x7D
	::System::Boolean Field_2_12; // 0x7E
	::System::Boolean Field_2_21; // 0x7F
	::System::Single Field_2_9; // 0x80
	::System::Single Field_2_11; // 0x84
	::System::Int32 Field_2_0; // 0x88
	::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 Field_2_3; // 0x8C
	::System::Single Field_2_18; // 0x90
	::System::Single Field_2_20; // 0x94
	::System::Single Field_2_16; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
