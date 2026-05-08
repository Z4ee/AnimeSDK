#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_59E1B4DADF2323B0_STRUCT_2_662B7A30B43E8124_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x703B20)
#define CLASS_1_59E1B4DADF2323B0_STRUCT_2_662B7A30B43E8124_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_1_59E1B4DADF2323B0_Struct_2_662B7A30B43E8124_TypeDefinitionIndex = 61177;

struct alignas(8) Class_1_59E1B4DADF2323B0_Struct_2_662B7A30B43E8124
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> Field_2_4; // 0x10
	::System::Collections::Generic::IEnumerable_1<::System::String*>* Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_STRUCT_2_662B7A30B43E8124_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_STRUCT_2_662B7A30B43E8124_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
