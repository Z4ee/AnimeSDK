#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_ABB13E12DFC246CE_Class_1_DBC388EAA88E6AE1;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_6CB4F3D1046CA228_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x792E00)
#define CLASS_1_ABB13E12DFC246CE_STRUCT_2_6CB4F3D1046CA228_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Struct_2_6CB4F3D1046CA228_TypeDefinitionIndex = 55861;

struct alignas(8) Class_1_ABB13E12DFC246CE_Struct_2_6CB4F3D1046CA228
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_ABB13E12DFC246CE_Class_1_DBC388EAA88E6AE1*> Field_2_1; // 0x10
	::Class_1_ABB13E12DFC246CE_Class_1_DBC388EAA88E6AE1* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::System::String*>> Field_2_5; // 0x30
	::System::Threading::CancellationToken Field_2_2; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_3<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32>> Field_2_6; // 0x58
	::System::Int32 Field_2_3; // 0x78
	::System::Int32 Field_2_0; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_6CB4F3D1046CA228_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_STRUCT_2_6CB4F3D1046CA228_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
