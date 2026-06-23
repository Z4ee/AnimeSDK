#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_63BB14150EF3816C_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x833BF0)
#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_63BB14150EF3816C_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Struct_2_63BB14150EF3816C_1_TypeDefinitionIndex = 55858;

struct alignas(8) Class_1_ABB13E12DFC246CE_Struct_2_63BB14150EF3816C_1
{
	::Newtonsoft::Json::Linq::JToken* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*>> Field_2_6; // 0x18
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1, ::Newtonsoft::Json::Linq::JToken*>> Field_2_1; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::System::String*>> Field_2_5; // 0x60
	::System::Int32 Field_2_0; // 0x80
	::System::Int32 Field_2_2; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_63BB14150EF3816C_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_63BB14150EF3816C_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
