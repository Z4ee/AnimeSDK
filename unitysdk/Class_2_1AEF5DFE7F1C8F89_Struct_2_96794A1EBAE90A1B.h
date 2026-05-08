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

#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B93F0)
#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_1AEF5DFE7F1C8F89_Struct_2_96794A1EBAE90A1B_TypeDefinitionIndex = 65027;

struct alignas(8) Class_2_1AEF5DFE7F1C8F89_Struct_2_96794A1EBAE90A1B
{
	::UnityEngine::Transform* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Class_2_1AEF5DFE7F1C8F89* Field_2_2; // 0x20
	::UnityEngine::AnimationCurve* Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x30
	::System::Single Field_2_4; // 0x40
	::UnityEngine::Vector3 Field_2_7; // 0x44
	::System::Int32 Field_2_0; // 0x50
	::UnityEngine::Vector3 Field_2_8; // 0x54
	::System::Single Field_2_5; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_96794A1EBAE90A1B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
