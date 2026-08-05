#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMoveParam; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x635F70)
#define CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_BB48133F415E21C3_1_TypeDefinitionIndex = 76722;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_BB48133F415E21C3_1
{
	::Class_2_3CC769D284A54927* Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::MoleMole::FishMoveParam* Field_2_6; // 0x38
	::UnityEngine::Vector3 Field_2_0; // 0x40
	::System::Int32 Field_2_3; // 0x4C
	::System::Single Field_2_7; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
