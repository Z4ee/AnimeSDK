#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_642419429F509B0B;
class Class_1_B9D6E7E76075C6E2_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_642419429F509B0B_STRUCT_2_2EA8F1FACE8BE5CC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D15A0)
#define CLASS_1_642419429F509B0B_STRUCT_2_2EA8F1FACE8BE5CC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6CB1D0)

inline static constexpr unsigned int Class_1_642419429F509B0B_Struct_2_2EA8F1FACE8BE5CC_TypeDefinitionIndex = 70709;

struct alignas(8) Class_1_642419429F509B0B_Struct_2_2EA8F1FACE8BE5CC
{
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_4; // 0x18
	::Class_1_642419429F509B0B* Field_2_2; // 0x20
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B9D6E7E76075C6E2_2*>*> Field_2_5; // 0x28
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_2EA8F1FACE8BE5CC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_STRUCT_2_2EA8F1FACE8BE5CC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
