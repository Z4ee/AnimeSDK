#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFence.h"

class Class_1_4AF8D6CF5BED3FDC;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_C104F3CC3CC6D14B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85AC30)
#define CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_C104F3CC3CC6D14B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_4AF8D6CF5BED3FDC_Struct_2_C104F3CC3CC6D14B_TypeDefinitionIndex = 46002;

struct alignas(8) Class_1_4AF8D6CF5BED3FDC_Struct_2_C104F3CC3CC6D14B
{
	::Class_1_4AF8D6CF5BED3FDC* Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x18
	::System::Object* Field_2_6; // 0x28
	::System::Threading::CancellationToken Field_2_0; // 0x30
	::UnityEngine::Rendering::GraphicsFence Field_2_7; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x48
	::System::Int32 Field_2_5; // 0x4C
	::System::Int32 Field_2_3; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_C104F3CC3CC6D14B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_C104F3CC3CC6D14B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
