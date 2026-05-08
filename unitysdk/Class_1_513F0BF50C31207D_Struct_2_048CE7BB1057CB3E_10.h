#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_513F0BF50C31207D_Class_1_10B680992CD21579;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x755EF0)
#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E_10_TypeDefinitionIndex = 71395;

struct alignas(8) Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E_10
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x20
	::Class_1_513F0BF50C31207D_Class_1_10B680992CD21579* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x40
	::System::Action_1<::System::Boolean>* Field_2_7; // 0x48
	::System::Single Field_2_11; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::UnityEngine::Vector3 Field_2_3; // 0x58
	::System::Int32 Field_2_2; // 0x64
	::System::Int32 Field_2_14; // 0x68
	::System::UInt32 Field_2_5; // 0x6C
	::System::Boolean Field_2_13; // 0x70
	::System::Boolean Field_2_12; // 0x71
	::System::Single Field_2_10; // 0x74
	::UnityEngine::Vector3 Field_2_4; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
