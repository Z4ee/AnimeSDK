#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_07C29C618CA313C5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x826CF0)
#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_07C29C618CA313C5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Struct_2_07C29C618CA313C5_TypeDefinitionIndex = 55855;

struct alignas(8) Class_1_ABB13E12DFC246CE_Struct_2_07C29C618CA313C5
{
	::Newtonsoft::Json::Linq::JToken* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_3<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32>> Field_2_1; // 0x18
	::UnityEngine::Networking::UnityWebRequest* Field_2_6; // 0x38
	::System::String* Field_2_3; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_2; // 0x48
	::System::Threading::CancellationToken Field_2_4; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Networking::UnityWebRequest*> Field_2_7; // 0x58
	::System::Int32 Field_2_0; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_07C29C618CA313C5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_07C29C618CA313C5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
