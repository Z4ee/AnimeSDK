#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
class Class_3_FFD0045B4597F294;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_83FE7F106B7EDEDA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5DF730)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_83FE7F106B7EDEDA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_83FE7F106B7EDEDA_TypeDefinitionIndex = 57638;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_83FE7F106B7EDEDA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_3_FFD0045B4597F294* Field_2_6; // 0x38
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x40
	::UnityEngine::Vector3 Field_2_10; // 0x48
	::UnityEngine::Vector3 Field_2_8; // 0x54
	::System::Boolean Field_2_4; // 0x60
	::System::Single Field_2_9; // 0x64
	::System::Single Field_2_12; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::UnityEngine::Vector3 Field_2_11; // 0x70
	::System::Int32 Field_2_0; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_83FE7F106B7EDEDA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_83FE7F106B7EDEDA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
