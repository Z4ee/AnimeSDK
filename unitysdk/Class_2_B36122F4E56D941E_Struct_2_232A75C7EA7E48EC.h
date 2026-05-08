#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_631;
class Class_2_8A73177250348A72;
class Class_2_B36122F4E56D941E;
class Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B36122F4E56D941E_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7930C0)
#define CLASS_2_B36122F4E56D941E_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B36122F4E56D941E_Struct_2_232A75C7EA7E48EC_TypeDefinitionIndex = 53239;

struct alignas(8) Class_2_B36122F4E56D941E_Struct_2_232A75C7EA7E48EC
{
	::Class_2_B36122F4E56D941E* Field_2_2; // 0x10
	::Class_2_208CC9941471731A_631* Field_2_5; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745> Field_2_7; // 0x20
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745>*, ::System::Collections::Generic::List_1<::Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745>*> Field_2_4; // 0x58
	::Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A_1* Field_2_3; // 0x60
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x68
	::Class_2_8A73177250348A72* Field_2_6; // 0x78
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x80
	::System::Int32 Field_2_0; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
