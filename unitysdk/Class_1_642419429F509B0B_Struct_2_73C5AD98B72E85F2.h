#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_642419429F509B0B;
class Class_1_B37365D9009BA07B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_642419429F509B0B_STRUCT_2_73C5AD98B72E85F2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85E850)
#define CLASS_1_642419429F509B0B_STRUCT_2_73C5AD98B72E85F2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)

inline static constexpr unsigned int Class_1_642419429F509B0B_Struct_2_73C5AD98B72E85F2_TypeDefinitionIndex = 52042;

struct alignas(8) Class_1_642419429F509B0B_Struct_2_73C5AD98B72E85F2
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::System::String*>*> Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x28
	::Class_1_642419429F509B0B* Field_2_7; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B37365D9009BA07B*>*> Field_2_5; // 0x38
	::System::Int32 Field_2_1; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_73C5AD98B72E85F2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_73C5AD98B72E85F2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
