#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936;
class Class_1_642419429F509B0B;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_642419429F509B0B_STRUCT_2_33BB31C42CB494B4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76AA00)
#define CLASS_1_642419429F509B0B_STRUCT_2_33BB31C42CB494B4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_1_642419429F509B0B_Struct_2_33BB31C42CB494B4_TypeDefinitionIndex = 73228;

struct alignas(8) Class_1_642419429F509B0B_Struct_2_33BB31C42CB494B4
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936*> Field_2_4; // 0x10
	::Class_1_642419429F509B0B* Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_33BB31C42CB494B4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_33BB31C42CB494B4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
