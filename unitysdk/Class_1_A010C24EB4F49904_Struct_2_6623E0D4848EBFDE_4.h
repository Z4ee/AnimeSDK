#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936;
class Class_1_A010C24EB4F49904;
class Class_1_B9D6E7E76075C6E2_2;
class Class_2_F45B22F3BBA809FA_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8;

#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76B830)
#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_4_TypeDefinitionIndex = 51078;

struct alignas(8) Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_4
{
	::Class_2_F45B22F3BBA809FA_2* Field_2_3; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8<::Class_1_B9D6E7E76075C6E2_2*>*> Field_2_1; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936*> Field_2_4; // 0x30
	::Class_1_A010C24EB4F49904* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
