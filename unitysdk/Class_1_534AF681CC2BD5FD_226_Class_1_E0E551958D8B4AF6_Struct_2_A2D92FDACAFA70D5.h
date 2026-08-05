#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_A2D92FDACAFA70D5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81F4A0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_A2D92FDACAFA70D5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_A2D92FDACAFA70D5_TypeDefinitionIndex = 54276;

struct alignas(8) Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_A2D92FDACAFA70D5
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6* Field_2_7; // 0x30
	::System::Int32 Field_2_1; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_A2D92FDACAFA70D5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_A2D92FDACAFA70D5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
