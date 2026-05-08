#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_452;
class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7177B0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_CA83E5325D8159DF_TypeDefinitionIndex = 61336;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_CA83E5325D8159DF
{
	::Class_2_3CC769D284A54927* Field_2_2; // 0x10
	::Class_2_208CC9941471731A_452* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::Threading::CancellationToken Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::System::Boolean Field_2_5; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
