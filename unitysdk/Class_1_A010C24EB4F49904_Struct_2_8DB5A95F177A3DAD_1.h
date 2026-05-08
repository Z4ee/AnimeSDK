#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936;
class Class_1_A010C24EB4F49904;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A010C24EB4F49904_STRUCT_2_8DB5A95F177A3DAD_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x702EE0)
#define CLASS_1_A010C24EB4F49904_STRUCT_2_8DB5A95F177A3DAD_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_1_A010C24EB4F49904_Struct_2_8DB5A95F177A3DAD_1_TypeDefinitionIndex = 51079;

struct alignas(8) Class_1_A010C24EB4F49904_Struct_2_8DB5A95F177A3DAD_1
{
	::Class_1_A010C24EB4F49904* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_1_627A5A7833BA1936*> Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_8DB5A95F177A3DAD_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_8DB5A95F177A3DAD_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
