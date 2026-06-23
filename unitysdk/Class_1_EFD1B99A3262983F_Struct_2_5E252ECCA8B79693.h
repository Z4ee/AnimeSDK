#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_EFD1B99A3262983F_STRUCT_2_5E252ECCA8B79693_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x796300)
#define CLASS_1_EFD1B99A3262983F_STRUCT_2_5E252ECCA8B79693_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x61A480)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F_Struct_2_5E252ECCA8B79693_TypeDefinitionIndex = 72179;

struct alignas(8) Class_1_EFD1B99A3262983F_Struct_2_5E252ECCA8B79693
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> Field_2_6; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x38
	::System::Diagnostics::Stopwatch* Field_2_5; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_STRUCT_2_5E252ECCA8B79693_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_STRUCT_2_5E252ECCA8B79693_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
