#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3A7CC933E49505B0;
class Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3A7CC933E49505B0_STRUCT_2_B46FAF8759548C77_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7DF2E0)
#define CLASS_2_3A7CC933E49505B0_STRUCT_2_B46FAF8759548C77_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3A7CC933E49505B0_Struct_2_B46FAF8759548C77_1_TypeDefinitionIndex = 79572;

struct alignas(8) Class_2_3A7CC933E49505B0_Struct_2_B46FAF8759548C77_1
{
	::System::Threading::CancellationToken Field_2_5; // 0x10
	::Class_2_3A7CC933E49505B0* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::System::Int32>> Field_2_10; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>> Field_2_7; // 0x38
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::Newtonsoft::Json::Linq::JToken*>> Field_2_9; // 0x58
	::System::Int32 Field_2_11; // 0x78
	::System::Int32 Field_2_6; // 0x7C
	::System::Int32 Field_2_0; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_B46FAF8759548C77_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_B46FAF8759548C77_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
