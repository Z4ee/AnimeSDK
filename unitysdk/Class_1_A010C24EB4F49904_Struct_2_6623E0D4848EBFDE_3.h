#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936;
class Class_1_A010C24EB4F49904;
class Class_1_B37365D9009BA07B;
class Class_2_A48F3719AA1CF200_15;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8;

#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x704000)
#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x390820)

inline static constexpr unsigned int Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_3_TypeDefinitionIndex = 51077;

struct alignas(8) Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_3
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8<::Class_1_B37365D9009BA07B*>*> Field_2_1; // 0x10
	::Class_2_A48F3719AA1CF200_15* Field_2_3; // 0x28
	::Class_1_A010C24EB4F49904* Field_2_2; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936*> Field_2_4; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
