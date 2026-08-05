#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_610A95E34FE0E162_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x849A00)
#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_610A95E34FE0E162_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Struct_2_610A95E34FE0E162_TypeDefinitionIndex = 75539;

struct alignas(8) Class_1_ABB13E12DFC246CE_Struct_2_610A95E34FE0E162
{
	::System::String* Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Networking::UnityWebRequest*> Field_2_4; // 0x18
	::UnityEngine::Networking::UnityWebRequest* Field_2_5; // 0x30
	::System::Threading::CancellationToken Field_2_7; // 0x38
	::Newtonsoft::Json::Linq::JToken* Field_2_6; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*>> Field_2_1; // 0x48
	::System::Int32 Field_2_2; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_610A95E34FE0E162_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_610A95E34FE0E162_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
