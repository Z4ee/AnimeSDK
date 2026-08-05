#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_758;
class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72F410)
#define CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_CA83E5325D8159DF_TypeDefinitionIndex = 76686;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_CA83E5325D8159DF
{
	::Class_2_3CC769D284A54927* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x18
	::System::Threading::CancellationToken Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x30
	::Class_2_208CC9941471731A_758* Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Boolean Field_2_11; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_CA83E5325D8159DF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
