#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x88AF10)
#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_1AEF5DFE7F1C8F89_Struct_2_96794A1EBAE90A1B_TypeDefinitionIndex = 77004;

struct alignas(8) Class_2_1AEF5DFE7F1C8F89_Struct_2_96794A1EBAE90A1B
{
	::UnityEngine::AnimationCurve* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x20
	::Class_2_1AEF5DFE7F1C8F89* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_10; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Single Field_2_11; // 0x44
	::System::Single Field_2_4; // 0x48
	::UnityEngine::Vector3 Field_2_8; // 0x4C
	::UnityEngine::Vector3 Field_2_9; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
