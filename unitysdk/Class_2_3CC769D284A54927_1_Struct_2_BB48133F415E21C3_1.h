#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
namespace MoleMole { class FishMoveParam; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_BB48133F415E21C3_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C44C0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_BB48133F415E21C3_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_BB48133F415E21C3_1_TypeDefinitionIndex = 86321;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_BB48133F415E21C3_1
{
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::MoleMole::FishMoveParam* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::UnityEngine::Vector3 Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x4C
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_BB48133F415E21C3_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_BB48133F415E21C3_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
