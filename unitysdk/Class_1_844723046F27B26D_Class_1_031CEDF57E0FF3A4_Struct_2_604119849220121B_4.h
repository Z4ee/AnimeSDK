#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_844723046F27B26D_Class_1_031CEDF57E0FF3A4;
class Class_1_844723046F27B26D_Class_1_C9F259509FA3F1B6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_844723046F27B26D_CLASS_1_031CEDF57E0FF3A4_STRUCT_2_604119849220121B_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81C450)
#define CLASS_1_844723046F27B26D_CLASS_1_031CEDF57E0FF3A4_STRUCT_2_604119849220121B_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_844723046F27B26D_Class_1_031CEDF57E0FF3A4_Struct_2_604119849220121B_4_TypeDefinitionIndex = 59824;

struct alignas(8) Class_1_844723046F27B26D_Class_1_031CEDF57E0FF3A4_Struct_2_604119849220121B_4
{
	::System::Threading::CancellationToken Field_2_7; // 0x10
	::Class_1_844723046F27B26D_Class_1_C9F259509FA3F1B6* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_1_844723046F27B26D_Class_1_031CEDF57E0FF3A4* Field_2_0; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::System::Int32 Field_2_2; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D_CLASS_1_031CEDF57E0FF3A4_STRUCT_2_604119849220121B_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D_CLASS_1_031CEDF57E0FF3A4_STRUCT_2_604119849220121B_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
