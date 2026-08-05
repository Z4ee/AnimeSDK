#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936_1;
class Class_1_642419429F509B0B;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_642419429F509B0B_STRUCT_2_261CF4F4EF243789_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F2510)
#define CLASS_1_642419429F509B0B_STRUCT_2_261CF4F4EF243789_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)

inline static constexpr unsigned int Class_1_642419429F509B0B_Struct_2_261CF4F4EF243789_TypeDefinitionIndex = 52044;

struct alignas(8) Class_1_642419429F509B0B_Struct_2_261CF4F4EF243789
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Field_2_1; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936_1*> Field_2_6; // 0x28
	::System::String* Field_2_7; // 0x30
	::Class_1_642419429F509B0B* Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_261CF4F4EF243789_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_261CF4F4EF243789_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
