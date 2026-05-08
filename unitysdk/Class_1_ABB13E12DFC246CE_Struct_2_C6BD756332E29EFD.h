#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_C6BD756332E29EFD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76E920)
#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_C6BD756332E29EFD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Struct_2_C6BD756332E29EFD_TypeDefinitionIndex = 74748;

struct alignas(8) Class_1_ABB13E12DFC246CE_Struct_2_C6BD756332E29EFD
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*>> Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::Newtonsoft::Json::Linq::JToken*>> Field_2_1; // 0x30
	::System::Threading::CancellationToken Field_2_4; // 0x50
	::System::Int32 Field_2_0; // 0x58
	::System::Int32 Field_2_2; // 0x5C
	::System::Int32 Field_2_3; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_C6BD756332E29EFD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_C6BD756332E29EFD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
