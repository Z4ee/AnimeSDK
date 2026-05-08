#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_631;
class Class_2_8A73177250348A72;
class Class_2_B36122F4E56D941E;
class Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A;
class Class_3_270194760B058114;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B36122F4E56D941E_STRUCT_2_849440932DA4AA4B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x647BC0)
#define CLASS_2_B36122F4E56D941E_STRUCT_2_849440932DA4AA4B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B36122F4E56D941E_Struct_2_849440932DA4AA4B_TypeDefinitionIndex = 53230;

struct alignas(8) Class_2_B36122F4E56D941E_Struct_2_849440932DA4AA4B
{
	::System::Collections::Generic::List_1_Enumerator<::System::String*> Field_2_8; // 0x10
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_6; // 0x28
	::Class_3_270194760B058114* Field_2_2; // 0x30
	::Class_2_8A73177250348A72* Field_2_7; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::Class_2_208CC9941471731A_631* Field_2_5; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x58
	::Class_2_B36122F4E56D941E* Field_2_3; // 0x68
	::Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A* Field_2_4; // 0x70
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_849440932DA4AA4B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_849440932DA4AA4B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
